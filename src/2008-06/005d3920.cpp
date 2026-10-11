// from server: 93% by tester
struct S
{
    int f(int, int);
    int value4;
    int value8;
    int valueC;
    int value10;
    int value14;
    int value18;
};

extern "C" void __stdcall sub_40DB00(int, int);

int S::f(int p1, int p2)
{
    int* base = (int*)p1;
    if (base)
        base = (int*)((char*)base - 20);
    else
        base = 0;

    int index = *(int*)((char*)this + 0xC);
    int offset = *(int*)((char*)base + 0x134);
    int entry = *(int*)((char*)index + offset);
    entry += *(int*)((char*)this + 8);

    int* target = (int*)((char*)entry + (int)base + 0x134);
    int value = *(int*)p2;

    if (*target != value)
    {
        *target = value;

        int changed = *(int*)((char*)this + 0x10);
        if (changed)
        {
            int a = *(int*)((char*)this + 4);
            int b = *(int*)((char*)this + 0x18);
            int c = *(int*)((char*)base + 0x134);
            int d = *(int*)((char*)b + c);
            d += *(int*)((char*)this + 0x14);
            int* arg = (int*)((char*)d + (int)base + 0x134);
            ((void (__stdcall*)(int*, int))changed)(arg, a);
        }

        int e = *(int*)((char*)this + 4);
        sub_40DB00((int)base, e);
    }

    return 0;
}
