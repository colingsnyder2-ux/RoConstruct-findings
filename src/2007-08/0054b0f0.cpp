// from server: 83% by colin
struct S_func_0054b0f0
{
    char pad0[0x3c];
    char field_3c;
    char pad3d[0x3];
    char field_40;
    char field_41;
    char pad42[0x6];
    char* field_48;
    int field_4c;
    int field_50;
    int field_54;

    void f(int a, int b, int c);
};

extern "C" void* __stdcall alloc_77e618(unsigned int, const void*);
extern "C" void __stdcall dealloc_77e610(void*, unsigned int);

void S_func_0054b0f0::f(int a, int b, int c)
{
    int n = a;
    if (n == -1)
        n = 0x1000;

    int m = b;
    if (m == -1)
        m = 4;

    int* p;
    int two = 2;
    if (m > 2)
        p = &m;
    else
        p = &two;

    int val = *p;
    field_50 = val;

    if (n == 0)
        n = 1;

    int total = val + n;
    if (field_4c != total)
    {
        void* mem = alloc_77e618(total, 0);
        int old = field_4c;
        field_4c = total;
        char* oldptr = field_48;
        field_48 = (char*)mem;
        if (oldptr)
            dealloc_77e610(oldptr, old);
    }

    void (__thiscall *fn)(S_func_0054b0f0*) = *(void (__thiscall **)(S_func_0054b0f0*))((*(int*)this) + 0x54);
    fn(this);

    if (field_41)
        field_41 = 0;

    field_40 = (char)c;
    field_41 = 1;
    field_54 |= 1;
    field_3c = 0;
}
