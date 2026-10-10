// from server: 36% by colin
extern "C" {
    void* __stdcall sub_62fef6(unsigned int);
    void __stdcall sub_5e9d20();
    void __stdcall sub_5e9d60();
    void* __stdcall sub_550440();
    void __stdcall sub_4024c0();
    void __stdcall sub_630b9e();
    void __stdcall sub_77e698();
    void __stdcall sub_77e6d8();
}

struct S {
    void f(int, int, int);
};

void S::f(int a, int b, int c)
{
    int* p = *(int**)this;
    if (*(unsigned char*)((char*)p + 0x1c) & 1)
    {
        sub_77e698();
        sub_4024c0();
        sub_630b9e();
    }
    int v = 0;
    if (*(int*)((char*)p + 8) != 0)
    {
        int* q = *(int**)((char*)p + 4);
        int* r = *(int**)((char*)q + 4);
        if (r == q)
            sub_77e6d8();
        if (r == *(int**)((char*)p + 4))
            sub_77e6d8();
        v = *(int*)((char*)r + 8);
    }
    if (a == -1)
        a = 0x80;
    if (b == -1)
        b = *(int*)((char*)(*(int**)this) + 0x18);
    void* mem = sub_62fef6(0xb8);
    void* obj = 0;
    if (mem != 0)
        obj = sub_550440();
    int* p2 = *(int**)this;
    int* q2 = *(int**)((char*)p2 + 4);
    sub_5e9d20();
    sub_5e9d60();
    *(int**)((char*)q2 + 4) = 0;
    if (v != 0)
    {
        int* p3 = *(int**)this;
        int* q3 = *(int**)((char*)p3 + 4);
        int* r3 = *(int**)((char*)q3 + 4);
        if (r3 == q3)
            sub_77e6d8();
        if (r3 == *(int**)((char*)p3 + 4))
            sub_77e6d8();
        (*(void(__thiscall**)(void*, int))((*(int**)v)[0x38/4]))((void*)v, *(int*)((char*)r3 + 8));
    }
    int* p4 = *(int**)this;
    if (*(int*)((char*)p4 + 0xc) != 0)
    {
        int* q4 = *(int**)((char*)p4 + 0xc);
        (*(void(__thiscall**)(int*))((*(int**)q4)[1]))(q4);
    }
}
