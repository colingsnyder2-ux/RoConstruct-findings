// from server: 94% by atomic.potato
struct type_info {
    bool operator==(const type_info&) const;
};

struct S {
};

void __cdecl f(int a1, void* a2, int a3)
{
    if (a3 == 0 || a3 == 1) {
        if (a2 != 0) {
            *(int*)((char*)a2 + 0) = *(int*)((char*)a1 + 0);
            *(int*)((char*)a2 + 4) = *(int*)((char*)a1 + 4);
            *(int*)((char*)a2 + 8) = *(int*)((char*)a1 + 8);
            *(int*)((char*)a2 + 12) = *(int*)((char*)a1 + 12);
        }
        return;
    }
    if (a3 == 2) {
        return;
    }
    if (a3 == 3) {
        int* p = (int*)a2;
        int v = *p;
        bool r = ((const type_info*)v)->operator==(*(const type_info*)0xb38ac8);
        *p = r ? a1 : 0;
        return;
    }
    *(int*)a2 = 0xb38ac8;
    *(char*)((char*)a2 + 4) = 0;
    *(char*)((char*)a2 + 5) = 0;
}
