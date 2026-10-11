// from server: 74% by tester
struct I_func_005e7560 {
    char pad[36];
    int m_x;
};

struct S_func_005e7560 {
    char pad[92];
    I_func_005e7560* m_p;
    int f();
};

int S_func_005e7560::f()
{
    return m_p->m_x;
}

struct S_func_00645840 {
    int field0;
    int field4;
    void f(int);
};

void S_func_00645840::f(int)
{
    field4 = *reinterpret_cast<int*>(field4 + 4);
}

struct S_func_005e9f60 {
    char pad[0x30];
    void f(void*);
};

struct S_func_0066f6e0 {
    char pad[8];
    void* m_p8;
    char pad2[0x24];
    S_func_005e9f60 m_30;
    void f(void*);
};

void S_func_0066f6e0::f(void* arg)
{
    S_func_005e7560* esi = (S_func_005e7560*)arg;
    S_func_0066f6e0* edi = this;

    int ebp = esi->f();
    int eax = ((S_func_005e7560*)((char*)esi + 0x10))->f();
    *(char*)(ebp + 0x14) = 1;
    *(char*)(eax + 0x14) = 1;

    int v1 = (*(int (__thiscall**)(void*))(*(int*)((char*)esi + 4) + 4))((void*)((char*)esi + 4));
    int v2 = (*(int (__thiscall**)(void*))(*(int*)edi + 4))(edi);
    if (v1 > v2) {
        (*(void (__thiscall**)(void*, void*))(*(int*)edi->m_p8 + 0x14))(edi->m_p8, esi);
    }

    if ((*(int (__thiscall**)(void*))(*(int*)esi + 0xc))(esi) != 1) {
        void* local = esi;
        m_30.f(&local);
        (*(void (__thiscall**)(void*))(*(int*)esi + 0x2c))(esi);
        int r = ((int (__cdecl*)(void*, void*))0x5e7d30)(*(void**)((char*)esi + 0xc), *(void**)((char*)esi + 0x10));
        if (r != 0 && *(void**)(r + 4) == edi) {
            (*(void (__thiscall**)(void*, int))(*(int*)edi->m_p8 + 0x10))(edi->m_p8, r);
        }
    }

    ((S_func_00645840*)esi)->f((int)edi);
}
