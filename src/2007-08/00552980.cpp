// from server: 24% by colin
struct S_func_00552980 {
    char pad0[0x50];
    unsigned int m_flags;
    int f(int a1, int a2, int a3);
};

extern "C" int __stdcall sub_00551aa0(int *p);
extern "C" int __stdcall sub_0054fcb0();
extern "C" int __stdcall sub_005525c0(int *p);

int S_func_00552980::f(int a1, int a2, int a3)
{
    int result;
    int total;
    int remaining;

    if ((m_flags & 1) == 0) {
        sub_00551aa0(&a1);
        m_flags |= 1;
    }
    if ((m_flags & 2) != 0) {
        return -1;
    }
    total = 0;
    a1 = 0;
    result = sub_0054fcb0();
    if (result == -1) {
        sub_005525c0(&a2);
        m_flags |= 2;
        return total;
    }
    total = result;
    if (result >= a3) {
        return total;
    }
    remaining = a3 - result;
    result = sub_0054fcb0();
    if (result == -1) {
        sub_005525c0(&a2);
        m_flags |= 2;
        return total;
    }
    total += result;
    return total;
}
