// from server: 71% by colin
struct T_func_005b5a40 {
    char pad[8];
    int field8;
    int m(int, int);
};

struct T_copy {
    void copy(const void*);
};

int T_func_005b5a40::m(int a, int b)
{
    int* p = (int*)a;
    if (p != 0)
        p = (int*)((char*)p - 4);
    else
        p = 0;
    int* q = (int*)((char*)this->field8 + (int)p);
    ((T_copy*)b)->copy(q);
    *(int*)(b + 0x1c) = *(int*)((char*)q + 0x1c);
    return b;
}
