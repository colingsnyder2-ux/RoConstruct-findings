// from server: 75% by tester
struct type_info {
    bool operator==(const type_info&) const;
};

extern "C" type_info type_info_bind_t;

struct S {
};

int __cdecl f(int a, void* b, int c) {
    if (c == 0 || c == 1) {
        if (b != 0) {
            *(int*)((char*)b + 0) = *(int*)((char*)a + 0);
            *(int*)((char*)b + 4) = *(int*)((char*)a + 4);
            *(int*)((char*)b + 8) = *(int*)((char*)a + 8);
            *(int*)((char*)b + 12) = *(int*)((char*)a + 12);
        }
        return 0;
    }
    if (c == 2) {
        return 0;
    }
    if (c == 3) {
        int* p = (int*)b;
        int old = *p;
        bool eq = type_info_bind_t.operator==(*(type_info*)0xbae810);
        *p = eq ? 0 : old;
        return 0;
    }
    *(int*)b = 0xbae810;
    *(char*)((char*)b + 4) = 0;
    *(char*)((char*)b + 5) = 0;
    return 0;
}
