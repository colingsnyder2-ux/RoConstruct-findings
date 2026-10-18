// from server: 88% by colin
#pragma float_control(precise, off)

unsigned int __cdecl getName();

extern unsigned char table0[];
extern unsigned char table10[];
extern unsigned char table14[];
extern unsigned char table20[];
extern unsigned char table24[];
extern unsigned char table44[];
extern unsigned char table64[];
extern unsigned char table84[];
extern unsigned char tableA4[];
extern unsigned char tableC4[];
extern unsigned char table130[];
extern unsigned char table138[];
extern const char objectName[];
extern const float initialP;
extern const float initialForce;
extern const float initialVelocityY;

struct S {
    unsigned char* v0;
    unsigned char pad04[12];
    unsigned char* v10;
    unsigned char* v14;
    unsigned char pad18[8];
    unsigned char* v20;
    unsigned char* v24;
    unsigned char pad28[28];
    unsigned char* v44;
    unsigned char pad48[28];
    unsigned char* v64;
    unsigned char pad68[28];
    unsigned char* v84;
    unsigned char pad88[28];
    unsigned char* vA4;
    unsigned char padA8[28];
    unsigned char* vC4;
    unsigned char padC8[104];
    unsigned char* v130;
    unsigned char pad134[4];
    unsigned char* v138;
    unsigned char pad13C[12];
    float p;
    float forceX, forceY, forceZ;
    float velocityX, velocityY, velocityZ;
    float lastX, lastY, lastZ;

    S* init();
};

S* S::init()
{
    typedef unsigned int (__cdecl *Initializer)(const char*);
    reinterpret_cast<Initializer>(&getName)(objectName);

    p = initialP;
    v0 = table0;
    v10 = table10;
    v14 = table14;
    v20 = table20;
    v24 = table24;
    v44 = table44;
    v64 = table64;
    v84 = table84;
    vA4 = tableA4;
    vC4 = tableC4;
    v130 = table130;
    v138 = table138;

    float f = initialForce;
    forceX = f;
    forceY = f;
    forceZ = f;
    velocityX = 0.0f;
    velocityY = initialVelocityY;
    velocityZ = 0.0f;
    lastX = 0.0f;
    lastY = 0.0f;
    lastZ = 0.0f;
    return this;
}
