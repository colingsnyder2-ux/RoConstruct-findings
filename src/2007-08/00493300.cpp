// from server: 77% by colin
struct T_func_00493300 {
    void m();
};

void func_00493300(int* a, int* b, int* c, int* d, int* e, int* f)
{
    int* p = c;
    int* q = d;
    int* r = e;
    int* s = f;
    while (p != q) {
        int* u = p + 2;
        ((void (__thiscall *)(int*, int*))r)(s, u);
        p = *(int**)p;
    }
    a[0] = (int)r;
    a[1] = (int)s;
    a[2] = (int)b;
}
