// from server: 80% by atomic.potato
struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct S {
};

void __cdecl f(void* a, void* b, int c)
{
    if (c == 0 || c == 1) {
        if (b != 0) {
            int* src = (int*)a;
            int* dst = (int*)b;
            dst[0] = src[0];
            dst[1] = src[1];
            dst[2] = src[2];
            dst[3] = src[3];
        }
        return;
    }
    if (c == 2) {
        return;
    }
    if (c == 3) {
        int* p = (int*)a;
        int* q = (int*)b;
        type_info* ti = (type_info*)0x9e9c28;
        int r = ti->operator==(*(type_info*)0x9e9c28) ? 0 : -1;
        *q = r & *p;
        return;
    }
    int* p = (int*)b;
    p[0] = 0x9e9c28;
    ((char*)p)[4] = 0;
    ((char*)p)[5] = 0;
}
