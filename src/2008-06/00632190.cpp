// from server: 73% by king_originala
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

extern float initial148;
extern float initial14C;
extern float initialForce;
extern float initial160;

struct S {
    unsigned char *v0;
    unsigned char pad04[12];
    unsigned char *v10;
    unsigned char *v14;
    unsigned char pad18[8];
    unsigned char *v20;
    unsigned char *v24;
    unsigned char pad28[28];
    unsigned char *v44;
    unsigned char pad48[28];
    unsigned char *v64;
    unsigned char pad68[28];
    unsigned char *v84;
    unsigned char pad88[28];
    unsigned char *vA4;
    unsigned char padA8[28];
    unsigned char *vC4;
    unsigned char padC8[104];
    unsigned char *v130;
    unsigned char pad134[4];
    unsigned char *v138;
    unsigned char pad13C[12];
    float f148;
    float f14C;
    float f150;
    float f154;
    float f158;
    float f15C;
    float f160;
    float f164;
    float f168;
    float f16C;
    float f170;

    void initialize(const char *);
    S *construct();
};

S *S::construct()
{
    initialize("BodyPosition");

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

    f148 = initial148;
    f14C = initial14C;
    f150 = initialForce;
    f154 = initialForce;
    f158 = initialForce;
    f15C = 0.0f;
    f160 = initial160;
    f164 = 0.0f;
    f168 = 0.0f;
    f16C = 0.0f;
    f170 = 0.0f;
    return this;
}
