// from server: 46% by colin
struct CXTPPropertyGridItemBool {
    char pad0[0xb4];
    void* field_b4;
    char pad1[0x110 - 0xb8];
    int field_110;
    int method_58();
    int method_e8();
    int method_69e540(int, int, int, int, int);
};

struct Inner {
    char pad0[0x10];
    int method_69ec10();
    int method_69e890(int, int*, int, int, int);
};

extern "C" int __stdcall DrawFrameControl(void*, int, int, int*);

int CXTPPropertyGridItemBool::method_69e540(int a, int b, int c, int d, int e)
{
    if (this->field_110 == 0)
        return 0;

    int v1 = c - 1;
    int v2 = (b + d) / 2;
    int v3 = v2 - 6;
    int v4 = v2 + 7;
    int v5 = c + 0xc;

    void* p = *(void**)((char*)this + 0xb4);
    int r = ((int (__thiscall*)(void*))0x69ab30)(p);
    if (*(int*)(r + 4) == 1)
    {
        Inner* inner = (Inner*)(r + 0x10);
        if (inner->method_69ec10())
        {
            int m58 = this->method_58();
            int me8 = this->method_e8();
            int flags;
            if (m58)
            {
                flags = (me8 != 0) ? 8 : 5;
            }
            else
            {
                flags = (me8 != 0) ? 8 : 5;
            }
            int arg = a;
            if (arg)
                arg = *(int*)(arg + 4);
            inner->method_69e890(3, &v3, flags, arg, 0);
            return 1;
        }
    }

    int me8b = this->method_e8();
    int edi = (me8b != 0) ? 0x400 : 0;
    int m58b = this->method_58();
    int eax2 = (m58b != 0) ? 0x100 : 0;
    int flags2 = eax2 | edi;
    int arg2 = *(int*)(a + 4);
    DrawFrameControl((void*)arg2, 4, flags2, &v3);
    return 1;
}
