// from server: 38% by colin
struct S {
    void* field_0;
    void* field_4;
    void* field_8;
    char pad_0c[8];
    void* field_14;
    void dtor(char flag);
};

extern "C" void __cdecl sub_552bb0();

extern void* g_77e4dc;
extern void* g_77e4e0;

void S::dtor(char flag) {
    if (flag != 0) {
        field_8 = (void*)0x7a7d04;
        field_14 = g_77e4e0;
        field_14 = g_77e4dc;
    }
    sub_552bb0();
    void* p = field_8;
    field_0 = (void*)0x7a7ac4;
    void* q = *(void**)((char*)p + 4);
    *(void**)((char*)q + (int)this + 8) = (void*)0x7a7abc;
}
