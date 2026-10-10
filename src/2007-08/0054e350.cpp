// from server: 63% by colin
struct S {
    void* vtable;
    char pad[0x10];
    int* field_14;
    char pad2[0xc];
    int* field_24;
    char pad3[0xc];
    int* field_34;
    char pad4[0x8];
    char field_40;
    char pad5[0x5c];
    int field_a0;
    char pad6[0xc];
    unsigned int field_b0;
    int method(int);
};

extern "C" void __stdcall func_0054b740(void*, int, void*, int);

int S::method(int arg)
{
    if ((field_b0 >> 3) & 1)
    {
        if (*field_24 == 0)
        {
            void (__thiscall *fn)(S*) = *(void (__thiscall **)(S*))((char*)vtable + 0x58);
            fn(this);
        }
    }

    if (arg == -1)
        return 0;

    if ((field_b0 >> 3) & 1)
    {
        int* p24 = field_24;
        int* p34 = field_34;
        int a = *p24;
        int b = *p34;
        int sum = a + b;
        if (a == sum)
        {
            int* p14 = field_14;
            int c = *p14;
            int d = *p24;
            int diff = d - c;
            if (diff > 0)
            {
                func_0054b740((char*)this + 0x40, field_a0, (void*)c, diff);
            }
            int e = *field_24;
            int f = e + b;
            if (e == f)
                return -1;
        }
        *field_24 = (int)((char*)*field_24);
        *(char*)*field_24 = (char)arg;
        *field_34 -= 1;
        *field_24 += 1;
        return arg;
    }
    else
    {
        int tmp = arg;
        func_0054b740((char*)this + 0x40, field_a0, &tmp, 1);
        return 0;
    }
}
