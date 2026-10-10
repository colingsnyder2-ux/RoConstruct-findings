// from server: 50% by colin
struct S_func_0042f420 {
    char pad0[0xd8];
    int m_d8;
    int m_dc;
    char pad1[0x158 - 0xdc - 4];
    int m_158;
    int f(int arg);
};

extern "C" int __stdcall sub_77dcd0(int);
extern "C" int __stdcall sub_77dd74(int, int);
extern "C" int __stdcall sub_77ddb8(int, const char*);
extern "C" int __stdcall sub_77ddbc(int);
extern "C" int __stdcall sub_42f240(int, int);

int S_func_0042f420::f(int arg)
{
    int result;
    int flag = 0;
    int* p = &m_dc;
    if (sub_77dcd0((int)p)) {
        int* q = &m_d8;
        if (sub_77dcd0((int)q)) {
            if (m_158 != 0) {
                sub_42f240(m_158, (int)&result);
                flag = 1;
            } else {
                sub_77ddb8((int)&result, "list<T> too long");
                flag = 2;
            }
        } else {
            result = (int)q;
        }
    }
    sub_77dd74(arg, result);
    flag |= 4;
    if (flag & 2) {
        flag &= ~2;
        sub_77ddbc((int)&result);
    }
    if (flag & 1) {
        sub_77ddbc((int)&result);
    }
    return arg;
}
