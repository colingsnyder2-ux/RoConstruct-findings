// from server: 38% by colin
struct S {
    void* field_0;
    void* field_4;
    void* field_8;
    char pad[0x10];
    void* field_18;
    void ctor_helper(int);
};

extern "C" void __cdecl sub_552cb0();

extern void* g_77e4dc;
extern void* g_77e4e0;

void S::ctor_helper(int flag) {
    if (flag != 0) {
        *(void**)((char*)this + 8) = (void*)0x7a7cfc;
        *(void**)((char*)this + 0x18) = g_77e4e0;
        *(void**)((char*)this + 0x18) = g_77e4dc;
    }
    sub_552cb0();
    void* p = *(void**)((char*)this + 8);
    *(void**)this = (void*)0x7a7ad8;
    void* q = *(void**)((char*)p + 4);
    *(void**)((char*)q + (int)this + 8) = (void*)0x7a7ad0;
}
