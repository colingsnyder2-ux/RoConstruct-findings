// from server: 86% by colin
extern float G1;
extern float G2;
extern float G3;
extern int G4;

float func_005aabc0(unsigned char a)
{
    int v = a;
    if (!(G4 & 1)) {
        G2 = G1;
        G4 |= 1;
    }
    return (float)v * G2 - G3;
}
