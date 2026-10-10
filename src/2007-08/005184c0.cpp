// from server: 44% by colin
struct S {
    char pad[0x40];
    int f40;
    int f44;
    int f48;
    char pad2[0xac - 0x4c];
    int fac;
    char pad3[0xe8 - 0xb0];
    int fe8;
    char pad4[0x114 - 0xec];
    int f114;
    char pad5[0x158 - 0x118];
    int f158;
    char pad6[0x164 - 0x15c];
    int f164;
    int f168;
    int f16c;
    int f170;
    int f174;
    int f178;
    char pad7[0x188 - 0x17c];
    int f188;
    char pad8[0x1b0 - 0x18c];
    int f1b0;
    char pad9[0x1e4 - 0x1b4];
    int f1e4;
    int f1e8;
    int f1ec;
    int f1f0;
    int f1f4;
    char pad10[0x210 - 0x1f8];
    int f210;
    int f214;
    char pad11[0x24c - 0x218];
    int f24c;
    int f250;
    void f(int, int);
};

extern "C" void __stdcall sub_515320(S* self, int arg);
extern "C" void __stdcall sub_51ecd0(S* self, int arg);
extern "C" void __stdcall sub_514eb0(S* self, int arg);
extern "C" void __stdcall sub_72e9b0(int* arg);
extern "C" void __stdcall sub_630b8c(S* self, int arg);

void S::f(int p1, int p2) {
    if (p1) sub_515320(this, p1);
    if (p2) sub_515320(this, p2);
    sub_51ecd0(this, fac);
    sub_51ecd0(this, f250);
    sub_51ecd0(this, fe8);
    sub_51ecd0(this, f1ec);
    sub_51ecd0(this, f1f0);
    sub_51ecd0(this, f164);
    sub_51ecd0(this, f168);
    sub_51ecd0(this, f16c);
    if (f214 & 0x1000) {
        sub_514eb0(this, f114);
    }
    f214 &= ~0x1000;
    if (f214 & 0x2000) {
        sub_51ecd0(this, f188);
    }
    f214 &= ~0x2000;
    if (f214 & 8) {
        sub_51ecd0(this, f1f4);
    }
    f214 &= ~8;
    if (f170) {
        int n = 1 << (8 - f158);
        for (int i = 0; i < n; i++) {
            sub_51ecd0(this, ((int*)f170)[i]);
        }
        sub_51ecd0(this, f170);
    }
    if (f174) {
        int n = 1 << (8 - f158);
        for (int i = 0; i < n; i++) {
            sub_51ecd0(this, ((int*)f174)[i]);
        }
        sub_51ecd0(this, f174);
    }
    if (f178) {
        int n = 1 << (8 - f158);
        for (int i = 0; i < n; i++) {
            sub_51ecd0(this, ((int*)f178)[i]);
        }
        sub_51ecd0(this, f178);
    }
    sub_51ecd0(this, f210);
    sub_72e9b0((int*)((char*)this + 0x74));
    sub_51ecd0(this, f1b0);
    sub_51ecd0(this, f1e4);
    int saved24c = f24c;
    int saved48 = f48;
    int saved40 = f40;
    int saved44 = f44;
    int buf[16];
    for (int i = 0; i < 16; i++) buf[i] = ((int*)this)[i];
    sub_630b8c(this, 0);
    f40 = saved40;
    f44 = saved44;
    f24c = saved24c;
    for (int i = 0; i < 16; i++) ((int*)this)[i] = buf[i];
    f48 = saved48;
}
