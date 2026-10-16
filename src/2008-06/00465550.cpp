// from server: 20% by colin
struct S_004613d0 {
    char pad0[88];
    int m_x;
    int* f();
};

struct S_00465210 {
    int* f(int*);
};

struct S_00465550 {
    char pad0[0x20];
    int m_20;
    char pad1[0x138 - 0x24];
    int m_138;
    char pad2[0x144 - 0x13c];
    int m_144;
    char m_154;
    char m_155;
    char m_156;
    void func_00465550();
};

extern "C" int __cdecl func_00451300(int, int, int, int, int);
extern "C" void __cdecl func_00563090(int);
extern "C" void __cdecl func_005630e0(int);
extern "C" void* __cdecl func_00561f20(int*);
extern "C" void __cdecl func_00802430(int, int);
extern "C" void __cdecl func_00802434(int, int);
extern "C" void __cdecl func_00802438(int);
extern "C" void __cdecl func_0080245c(int, int);
extern "C" int __cdecl func_00802464(int);
extern "C" void __cdecl func_00802468(int);
extern "C" int __cdecl func_008023f4(int);
extern "C" void __cdecl func_00460e50(int, int, int);
extern "C" void __cdecl func_00460c90(int, int, int);
extern "C" int* __cdecl func_00465210(int);

int* S_004613d0::f()
{
    return &m_x;
}

void S_00465550::func_00465550()
{
    if (m_20 == 0)
        return;

    m_154 = 1;

    if (m_144 == 0)
        return;

    int* p138 = &m_138;
    func_00563090((int)p138);

    int* p144 = (int*)m_144;
    int* p138b = (int*)((char*)p144 + 0x138);
    int r = func_008023f4((int)p138b);
    m_156 = (r == 0);

    if (m_156) {
        int v = func_00802464(*(int*)((char*)p144 + 0x130));
        S_004613d0* s = (S_004613d0*)this;
        int* q = s->f();
        func_00460e50((int)q, v, 1);
    } else {
        int buf[8];
        func_0080245c((int)p138b, (int)buf);
        *(int*)((char*)buf + 0x1c) = *(int*)((char*)p138b + 0x1c);

        int* p = (int*)func_00465210(m_144);
        int* out;
        func_00561f20((int*)&out);
        int* edi = (int*)*out;
        *out = 0;

        if (out) {
            int* vt = (int*)*out;
            int* m = (int*)*(int*)((char*)vt + 4);
            int* fn = (int*)*(int*)((char*)m + (int)out);
            int f = *fn;
            ((void (__stdcall*)(int))f)(1);
        }

        func_00802430(2, 1);
        func_00451300((int)edi, (int)buf, 0x1000, 0, 0);
        func_00802434((int)buf, (int)buf);
        int v = func_00802464((int)buf);
        S_004613d0* s = (S_004613d0*)this;
        int* q = s->f();
        func_00460e50((int)q, v, 1);
        func_00802468((int)buf);
        func_00802438((int)buf);

        if (edi) {
            int* vt = (int*)*edi;
            int* m = (int*)*(int*)((char*)vt + 4);
            int* fn = (int*)*(int*)((char*)m + (int)edi);
            int f = *fn;
            ((void (__stdcall*)(int))f)(1);
        }
    }

    int flag;
    if (m_155 == 0 && m_156 != 0)
        flag = 0;
    else
        flag = 1;

    S_004613d0* s = (S_004613d0*)this;
    int* q = s->f();
    func_00460c90((int)q, flag, 1);

    func_005630e0((int)p138);
}
