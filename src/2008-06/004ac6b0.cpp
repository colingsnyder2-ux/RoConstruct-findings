// from server: 90% by tester
struct type_info;

extern "C" {
    int __stdcall type_info_equals(const type_info* self, const type_info* other);
}

struct S {
};

void __cdecl f(void* a, void* b, int c)
{
    if (c == 0) {
        if (b == 0)
            return;
        *(int*)((char*)b + 0) = *(int*)((char*)a + 0);
        *(int*)((char*)b + 4) = *(int*)((char*)a + 4);
        *(int*)((char*)b + 8) = *(int*)((char*)a + 8);
        *(int*)((char*)b + 12) = *(int*)((char*)a + 12);
        return;
    }
    if (c == 1)
        return;
    void** p = (void**)b;
    const type_info* ti = (const type_info*)*p;
    int r = type_info_equals(ti, (const type_info*)0x93aff8);
    unsigned char al = (unsigned char)r;
    int neg = -(int)al;
    int mask = neg >> 31;
    *p = (void*)(mask & (int)a);
}
