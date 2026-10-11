// from server: 78% by atomic.potato
struct type_info {
    bool operator==(const type_info&) const;
};

struct S {
};

void __cdecl f(int a, void* b, int c)
{
    if (a == 0 || a == 1) {
        if (b != 0) {
            int* dst = (int*)b;
            int* src = (int*)c;
            dst[0] = src[0];
            dst[1] = src[1];
            dst[2] = src[2];
            dst[3] = src[3];
            dst[4] = src[4];
            dst[5] = src[5];
        }
        return;
    }
    if (a == 2) {
        return;
    }
    if (a == 3) {
        int* p = (int*)b;
        int v = *p;
        bool eq = (*(const type_info*)&v) == (*(const type_info*)0xbd4808);
        *p = eq ? c : 0;
        return;
    }
    char* p = (char*)b;
    *(int*)p = 0xbd4808;
    p[4] = 0;
    p[5] = 0;
}
