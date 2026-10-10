// from server: 44% by colin
struct Assembly;

struct Assembly {
    char pad0[0xc];
    int field_c;
    char pad10[0x20];
    int field_30;
    char pad34[0x30];

    void func(int a, int b);
};

extern "C" void __stdcall sub_5e29b0(int, int, int);
extern "C" void __stdcall sub_5e24b0(int, int);
extern "C" void __stdcall sub_5b4070(int, int);

void Assembly::func(int a, int b)
{
    int local1;
    int local2;
    int local3;
    int* p;

    p = &a;
    sub_5e29b0((int)&local1, (int)&p, (int)(this + 0xc));
    local3 = local1;
    *(int*)(a + 0x20) = (int)this;
    int* eax = *(int**)(local3 + 8);
    int* edx = eax;
    if (*(int*)(eax + 0x20) != a)
        edx = *(int**)(local3 + 0xc);
    if (edx == eax)
        eax = *(int**)(local3 + 0xc);
    int edx2 = *(int*)(eax + 0x64);
    int* eax2 = *(int**)(a + 0x24);
    int ecx2 = *(int*)(eax2 + 0x64);
    sub_5e24b0(ecx2, edx2);
    sub_5b4070((int)(this + 0x30), (int)&local3);
}
