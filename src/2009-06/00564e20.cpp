// from server: 59% by atomic.potato
struct S {
    char pad[0x28];
    int field28;
    int field0;
    int field14;
    int field18;
    void destroy();
};

void S::destroy() {
    field28 = 0x8ad24c;
    field0 = 0x8ca98c;
    field14 = 0x8ca984;
    field14 = 0x8ad294;
    int* p = (int*)field18;
    if (p) {
        int* vt = (int*)*p;
        void (*fn)(void*) = (void (*)(void*))vt[4];
        fn(p);
    }
    field0 = 0x8ca7b4;
    extern void __stdcall sub_89e96c();
    sub_89e96c();
}
