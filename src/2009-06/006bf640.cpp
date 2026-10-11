// from server: 27% by atomic.potato
// roc 2009-06 006bf640  unit: RBX::Lua::LuaArguments  size: 403 bytes

extern "C" {
    extern int __cdecl sub_6babb0(void* a, int b, void* c);
    extern int __cdecl sub_6b8d80(void* a);
    extern void __cdecl sub_577e80(void* dst, void* src);
    extern void __cdecl sub_633d00(void* p);
}

extern float g_a3c6ec;
extern float g_a3c6f0;
extern float g_a3c6f4;
extern int g_a3c6f8;
extern void* g_a22af0;
extern void* g_a22afc;

struct LuaArguments {
    int f(void* a);
};

int LuaArguments::f(void* a) {
    void* ebp = a;
    void* edi;
    int eax;
    int ebx;
    float f0, f1, f2;
    float tmp[3];
    void* p;

    edi = (void*)sub_6babb0(ebp, 1, g_a22afc);
    eax = sub_6b8d80(ebp);
    eax = eax - 1;
    if (eax != 0) {
        ebx = 0;
        if (eax > 0) {
            do {
                p = (void*)sub_6babb0(ebp, ebx + 2, g_a22af0);
                sub_577e80(tmp, edi);
                f0 = 0.0f;
                f1 = 0.0f;
                f2 = 0.0f;
                tmp[0] = f0;
                tmp[1] = f1;
                tmp[2] = f2;
                tmp[0] = ((float*)p)[0] * ((float*)edi)[0]
                       + ((float*)p)[1] * ((float*)edi)[1]
                       + ((float*)p)[2] * ((float*)edi)[2];
                tmp[1] = ((float*)p)[3] * ((float*)edi)[0]
                       + ((float*)p)[4] * ((float*)edi)[1]
                       + ((float*)p)[5] * ((float*)edi)[2];
                tmp[2] = ((float*)p)[6] * ((float*)edi)[0]
                       + ((float*)p)[7] * ((float*)edi)[1]
                       + ((float*)p)[8] * ((float*)edi)[2];
                sub_633d00(tmp);
                ebx++;
            } while (ebx < eax);
        }
        return eax;
    }

    if ((g_a3c6f8 & 1) == 0) {
        g_a3c6f8 |= 1;
        g_a3c6ec = 0.0f;
        g_a3c6f0 = 0.0f;
        g_a3c6f4 = 0.0f;
    }

    sub_577e80(tmp, edi);
    f0 = 0.0f;
    f1 = 0.0f;
    f2 = 0.0f;
    tmp[0] = f0;
    tmp[1] = f1;
    tmp[2] = f2;
    tmp[0] = ((float*)edi)[0] * g_a3c6ec
           + ((float*)edi)[1] * g_a3c6f0
           + ((float*)edi)[2] * g_a3c6f4;
    tmp[1] = ((float*)edi)[3] * g_a3c6ec
           + ((float*)edi)[4] * g_a3c6f0
           + ((float*)edi)[5] * g_a3c6f4;
    tmp[2] = ((float*)edi)[6] * g_a3c6ec
           + ((float*)edi)[7] * g_a3c6f0
           + ((float*)edi)[8] * g_a3c6f4;
    sub_633d00(tmp);
    return 1;
}
