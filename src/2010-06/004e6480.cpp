// from server: 87% by atomic.potato
struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct S {
    void __cdecl f(int, void*, int);
};

void __cdecl S::f(int a1, void* a2, int a3) {
    if (a3 == 0 || a3 == 1) {
        if (a2 != 0) {
            *(int*)a2 = *(int*)a1;
            *(int*)((char*)a2 + 4) = *(int*)(a1 + 4);
        }
        return;
    }
    if (a3 == 2) {
        return;
    }
    if (a3 == 3) {
        int* p = (int*)a1;
        int v = *p;
        type_info* t = (type_info*)0xb92858;
        bool r = ((type_info*)v)->operator==(*t);
        int mask = (int)a2;
        *p = r ? mask : 0;
        return;
    }
    *(int*)a2 = 0xb92858;
    *(char*)((char*)a2 + 4) = 0;
    *(char*)((char*)a2 + 5) = 0;
}
