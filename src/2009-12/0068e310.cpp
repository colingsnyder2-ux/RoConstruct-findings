// from server: 73% by atomic.potato
struct type_info {
    bool operator==(const type_info&) const;
};

extern "C" {
    int __cdecl _strcmp(const char*, const char*);
}

struct S {
};

int __cdecl f(int a1, void* a2, int a3) {
    if (a3 == 0 || a3 == 1) {
        if (a2 != 0) {
            int* src = (int*)a1;
            int* dst = (int*)a2;
            dst[0] = src[0];
            dst[1] = src[1];
            dst[2] = src[2];
            dst[3] = src[3];
        }
        return 0;
    }
    if (a3 == 2) {
        return 0;
    }
    if (a3 == 3) {
        int* p = (int*)a1;
        int v = *p;
        bool eq = ((const type_info*)&v)->operator==(*(const type_info*)0xb36bb0);
        int r = eq ? 0 : 0;
        *p = r;
        return 0;
    }
    *(int*)a2 = 0xb36bb0;
    *((char*)a2 + 4) = 0;
    *((char*)a2 + 5) = 0;
    return 0;
}
