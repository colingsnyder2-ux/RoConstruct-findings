// from server: 36% by colin
// roc 2007-08 00470640  size: 688 bytes
// Reconstructed from target assembly.

extern "C" {
    int __stdcall glGetError();
    void __stdcall glBindTexture(unsigned int target, unsigned int texture);
    void __stdcall glCopyTexImage2D(unsigned int target, int level, unsigned int internalformat,
                                    int x, int y, int width, int height, int border);
    void __stdcall glDisable(unsigned int cap);
    void __stdcall glEnable(unsigned int cap);
    void __stdcall glGetDoublev(unsigned int pname, double* params);
    void __stdcall glReadBuffer(unsigned int mode);
    void __cdecl exit(int code);
}

struct S {
    char pad0[0x0c];
    int field_0c;
    char pad10[0x10];
    char field_20[0x50];
    int field_58;
    int field_60;
    int field_64;
    int field_68;
    int field_6c;
    char field_70;
    void method(int a, int b);
};

extern unsigned char g_8bcf62;
extern unsigned char g_8bd090;
extern int g_8bd028;
extern int g_8980fc;

extern "C" {
    void __cdecl func_46f770();
    void __cdecl func_46f7a0();
    int  __cdecl func_46f7b0(int);
    void __cdecl func_46fb50(void*);
    int  __cdecl func_470320(int);
    int  __cdecl func_470390();
    void __cdecl func_480170();
    int  __cdecl func_4806c0();
    void __cdecl func_502880();
    void __cdecl func_5028f0();
    int  __cdecl func_630d60(double);
}

extern "C" {
    void* __stdcall imp_77eb48(int);
    void* __stdcall imp_77eb54(int);
    void* __stdcall imp_77eb50(int, int);
    int   __stdcall imp_77eba0();
    void* __stdcall imp_77eb1c(void*, int);
    void* __stdcall imp_77eb20(int, int, int, int, int, int, int, int);
    void* __stdcall imp_77eb4c(int);
    void* __stdcall imp_77e698(const char*);
    void* __stdcall imp_77e644(void*, void*, void*);
    void* __stdcall imp_77e6ac(void*);
    void* __stdcall imp_77e938(int);
    void* __stdcall imp_8bd8f0(int);
    void* __stdcall imp_8980fc(void*, void*, int, const char*, int, void*, int);
}

void S::method(int a, int b)
{
    func_46f770();
    int v = func_470320(a);
    imp_77eb48(v);
    int r = func_470390();
    g_8bd028 -= r;

    int* p = (int*)b;
    float f1 = *(float*)((char*)p + 8) - *(float*)p;
    field_64 = func_630d60((double)f1);
    float f2 = *(float*)((char*)p + 0xc) - *(float*)((char*)p + 4);
    field_68 = func_630d60((double)f2);
    field_6c = 1;

    if (g_8bcf62 != 0) {
        imp_8bd8f0(0x84c0);
    }

    func_480170();
    int eax = func_46f7b0(field_58);
    int esi = eax;
    imp_77eb54(esi);
    imp_77eb50(esi, field_0c);
    int err = imp_77eba0();

    if (g_8bd090 == 0 && err != 0) {
        func_502880();
        if (g_8980fc != 0) {
            void* s = imp_77e698("Error encountered during glBindTexture: ");
            int tmp = func_4806c0();
            void* s2 = imp_77e644(s, (void*)tmp, (void*)err);
            imp_8980fc(s2, (void*)&g_8bd090, 0x51c, ".\\glg3dcpp\\Texture.cpp", 1, (void*)0x797ae4, 3);
            imp_77e6ac((char*)s2 + 0x1c);
            imp_77e6ac((char*)s2 + 0x38);
            imp_77e938(-1);
        }
        func_5028f0();
    }

    double d;
    imp_77eb1c(&d, 0xba2);

    int i1 = (int)(*(float*)((char*)p + 0xc) - *(float*)((char*)p + 4));
    int i2 = (int)(*(float*)((char*)p + 8) - *(float*)p);
    int i3 = (int)(d - *(float*)((char*)p + 0xc));
    int i4 = (int)*(float*)p;

    int* q = (int*)field_60;
    imp_77eb20(esi, 0, q[5], i4, i3, i2, i1, 0);

    func_46fb50((char*)this + 0x20);
    imp_77eb4c(esi);
    field_70 = 1;
    func_46f7a0();
    int r2 = func_470390();
    g_8bd028 += r2;
}
