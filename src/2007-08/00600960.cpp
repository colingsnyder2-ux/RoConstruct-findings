// from server: 38% by colin
struct S {
    int f(int);
};

struct VTable {
    void* pad[0x17];
    void (__thiscall *fn5c)(void*, void*);
    void (__thiscall *fn78)(void*, void*);
    void (__thiscall *fn7c)(void*);
};

struct VTable2 {
    void* pad[0xa];
    void (__thiscall *fn28)(void*, void*);
};

extern "C" void* __cdecl func_50b120();
extern "C" void* __cdecl func_50b1c0();
extern "C" void* __cdecl func_555430();
extern "C" void* __cdecl func_5555b0(void*, void*);
extern "C" void* __cdecl func_555c00(void*, void*, void*);
extern "C" void __cdecl func_555600(void*, void*, void*, void*, int, int, int);
extern "C" void __cdecl func_4e0180(void*, void*, void*);
extern "C" void __cdecl func_77e6ac(void*);

extern float g_787050;
extern float g_797e9c;

int S::f(int a)
{
    VTable* vt = *(VTable**)this;
    if (!((bool (__thiscall*)(void*))vt->pad[0x16])(this))
        return 0;

    int state = *(int*)((char*)this + 0xfc);
    int* arg = (int*)a;

    if (state == 1 || state == 3)
    {
        float* p = (float*)func_50b1c0();
        float v[4];
        v[0] = p[0];
        v[1] = p[1];
        v[2] = p[2];
        v[3] = 1.0f;
        void* r = func_5555b0(this, v);
        void* tmp;
        func_4e0180(&tmp, r, (char*)r + 8);
        VTable2* vt2 = *(VTable2**)arg;
        vt2->fn28(arg, &tmp);
    }
    else if (state == 2)
    {
        float* p = (float*)func_50b120();
        float v[4];
        v[0] = p[0];
        v[1] = p[1];
        v[2] = p[2];
        v[3] = 1.0f;
        void* r = func_555c00(this, v, v);
        VTable2* vt2 = *(VTable2**)arg;
        vt2->fn28(arg, r);
    }

    void* b;
    if (((bool (__thiscall*)(void*))vt->fn7c)(this))
    {
        vt->fn78(this, &b);
    }
    else
    {
        b = func_555430();
    }

    char buf[0x20];
    vt->fn5c(this, buf);

    float f1 = g_797e9c;
    float f2 = g_787050;
    float v2[4];
    v2[0] = f1;
    v2[1] = f1;
    v2[2] = f1;
    v2[3] = f2;

    func_555600(this, arg, b, v2, 1, 0, 0);

    func_77e6ac(buf);
    return 0;
}
