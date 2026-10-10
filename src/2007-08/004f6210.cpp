// from server: 34% by colin
extern "C" void* __cdecl sub_500060(unsigned int, unsigned int);
extern "C" void __cdecl sub_4FF810(void*);
extern "C" void __cdecl sub_4F4E10(void*, void*);

struct S {
    void* field0;
    int field4;
    int field8;
    void f(int);
};

void S::f(int arg) {
    int count = field8;
    void* old = field0;
    void* mem = sub_500060((unsigned int)(count * 24), 16);
    field0 = mem;
    int n = field8;
    int limit = arg < n ? arg : n;
    void* src = old;
    void* dst = mem;
    void* end = (char*)mem + limit * 24;
    while (dst < end) {
        if (dst != 0) {
            sub_4F4E10(dst, src);
            sub_4F4E10((char*)dst + 12, (char*)src + 12);
        }
        dst = (char*)dst + 24;
        src = (char*)src + 24;
    }
    void* p = old;
    void* pend = (char*)old + arg * 24;
    while (p < pend) {
        sub_4FF810(*(void**)((char*)p + 12));
        *(void**)((char*)p + 12) = 0;
        *(int*)((char*)p + 16) = 0;
        *(int*)((char*)p + 20) = 0;
        sub_4FF810(*(void**)p);
        *(void**)p = 0;
        *(int*)((char*)p + 4) = 0;
        *(int*)((char*)p + 8) = 0;
        p = (char*)p + 24;
    }
    sub_4FF810(old);
}
