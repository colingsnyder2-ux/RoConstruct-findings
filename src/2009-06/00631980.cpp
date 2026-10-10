// from server: 92% by why2
struct S_func_00631980 {
    char pad0[12];
    char m_sub[36];
    int f();
};

struct FreezeHelper {
    void freeze(bool);
};

int S_func_00631980::f()
{
    FreezeHelper* p = (FreezeHelper*)((char*)this + 12);
    p->freeze(true);
    int* q = *(int**)((char*)p + 32);
    return *q;
}
