// from server: 70% by colin
struct CNameItem {
    char pad[0x70];
    int field70;
    int field74;
    int field78;
    char pad2[0x3d0 - 0x7c];
    float f3d0;
    float f3d4;
    float f3d8;
    float f3dc;
    char f3e0;
    void sub_4759C0(int, int, int);
    void func(float*);
};

extern "C" double __cdecl ceil(double);
extern "C" int __stdcall glEnable(unsigned int);
extern "C" int __stdcall glScissor(int, int, int, int);

void CNameItem::func(float* p) {
    field78 += 1;
    field70 += 1;
    f3d0 = p[0];
    f3d4 = p[1];
    f3d8 = p[2];
    f3dc = p[3];
    int a = (int)ceil((double)p[0]);
    int b = (int)ceil((double)p[1]);
    int c = (int)ceil((double)p[2]);
    int d = (int)ceil((double)p[3]);
    sub_4759C0(b - a, d - c, c - b);
    glScissor(a, b, c - b, d - c);
    if (f3e0 == 0) {
        glEnable(0xc11);
        field78 += 1;
        field70 += 1;
        f3e0 = 1;
    } else {
        f3e0 = 1;
    }
}
