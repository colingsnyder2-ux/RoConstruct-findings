// from server: 83% by atomic.potato
struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct S {
};

int __cdecl f(int a1, void* a2, int a3)
{
    int* p = (int*)a2;
    if (a1 == 0 || a1 == 1) {
        if (p != 0) {
            int* src = (int*)a3;
            p[0] = src[0];
            p[1] = src[1];
        }
        return 0;
    }
    if (a1 == 2) {
        return 0;
    }
    if (a1 == 3) {
        int* q = (int*)a3;
        int v = *q;
        type_info* t = (type_info*)v;
        type_info* u = (type_info*)0xb606d0;
        bool eq = t->operator==(*u);
        int r = eq ? 0 : -1;
        *q = r & a3;
        return 0;
    }
    int* r = (int*)a3;
    r[0] = 0xb606d0;
    ((char*)r)[4] = 0;
    ((char*)r)[5] = 0;
    return 0;
}
