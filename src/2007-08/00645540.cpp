// from server: 75% by colin
struct S_func_00645540 {
    char pad[0x6c];
    int m_field_6c;
    int f(int* a, int b, int c, int d, int e);
};

extern "C" int __stdcall sub_006713d0(int* p);
extern "C" int __fastcall sub_00644710(void* p);

int S_func_00645540::f(int* a, int b, int c, int d, int e)
{
    int local;
    int result;
    int v;

    a[0] = 3;
    a[2] = 0;

    result = sub_006713d0(&local);

    v = (*(int (__fastcall **)(void*))((char*)this - 0x5c + 0x160))((char*)this - 0x5c);
    if (v == 0)
        a[2] |= 0x8000;

    if (result > 0)
    {
        int n = sub_00644710((char*)this - 0x5c);
        if (result <= n)
        {
            int flag = (m_field_6c != result - 1) ? 1 : 0;
            int bits = (flag - 1) & 0x86;
            bits |= 0x300000;
            a[2] |= bits;
        }
    }

    return 0;
}
