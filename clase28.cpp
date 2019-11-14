#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <cmath>

using namespace std;

void rungek4(float t0, float tf, float dt,string filename);

float d1x(float g, float kfr, float vx, float vy){
  return 
}

float d1y(float g, float kfr, float vx, float vy){
  return 
}
float d2x(float g, float kfr, float vx, float vya){
  return -kfr*vx*(vx/(sqrt(vx*vx)+(vy*vy)))
}

float d2y(float g, float kfr, float vx, float vy){
  return -g-kfr*vy**(vy/(sqrt(vx*vx)+(vy*vy)))
}


int main(){
  rungek4(0.0, 1000.0, 0.01, "runk4.dat");
  return 0;
}

/*Basado en el código del repositorio del profesor */
void rungek4(float t0, float tf, float dt,string filename){
  
    float v0 = 22.0;
    float theta = 45.0;
    float g = 9.8;
    float kfr = 0.7;
    float v0x = 10.0;
    float v0y = 10.0;
    float t = t0;
    float x = 1.0; 
    float y = 0.0;
    float xa = 0.0, ya=0.0, ta=0;
	float kx, kx_0, kx_1, kx_2, kx_3; 
	float ky, ky_0, ky_1, ky_2, ky_3; 
	ofstream outfile;
	outfile.open(filename);
	
	while(t<tf){    
	ta = t;
    xa = x;
    ya = y;
    
    outfile << t << " " << x << " " << y << endl;
    
	ofstream outfile;
	outfile.open(filename);
	kx_0 = d1x(float g, float kfr, float vx, float vy);
    ky_0 = d1y(float g, float kfr, float vx, float vy);

    t = ta + dt*0.5;
    x = xa + 0.5 * dt * kx_0;
    y = ya + 0.5 * dt * ky_0;
    kx_1 = d1x(float g, float kfr, float vx, float vy);
    ky_1 = d2x(float g, float kfr, float vx, float vy);

    t = ta + dt*0.5;
    x = xa + 0.5* dt * kx_1;
    y = ya + 0.5* dt * ky_1;
    kx_2 = dydt(float g, float kfr, float vx, float vy);
    ky_2 = dzdt(float g, float kfr, float vx, float vy);

    t = ta + dt;
    x = xa + dt * kx_2;
    y = ya + dt * ky_2;
    kx_3 = d1x(float g, float kfr, float vx, float vy);
    ky_3 = d1y(float g, float kfr, float vx, float vy);

    kx = kx_0/6.0 + kx_1/3.0 + kx_2/3.0 + kx_3/6.0;
    ky = ky_0/6.0 + ky_1/3.0 + ky_2/3.0 + ky_3/6.0;


    x = xa + dt * kx ;
    y = ya + dt * ky ;
    t = ta + dt;
  }
  outfile.close();
}
    
}


