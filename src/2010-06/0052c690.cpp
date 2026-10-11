// from server: 83% by atomic.potato
struct type_info {
    bool operator==(const type_info&) const;
};

struct S {
};

void __cdecl f(int a, void* b, int c)
{
    if (c == 0 || c == 1) {
        if (b != 0) {
            *(int*)((char*)b + 0) = *(int*)((char*)a + 0);
            *(int*)((char*)b + 4) = *(int*)((char*)a + 4);
            *(int*)((char*)b + 8) = *(int*)((char*)a + 8);
            *(int*)((char*)b + 12) = *(int*)((char*)a + 12);
        }
        return;
    }
    if (c == 2) {
        return;
    }
    if (c == 3) {
        int* p = (int*)a;
        int* q = (int*)b;
        bool eq = (*(type_info*)*p) == (*(type_info*)0xb99ae0);
        *q = eq ? 0 : (int)q;
        return;
    }
    *(int*)b = 0xb99ae0;
    *(char*)((char*)b + 4) = 0;
    *(char*)((char*)b + 5) = 0;
}
