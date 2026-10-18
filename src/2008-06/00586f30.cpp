// from server: 51% by colin
struct S {
    char pad[0x130];
    void* field130;
    void f(void* arg);
};

extern "C" void* __cdecl sub_6A0920(unsigned int size);
extern "C" void __cdecl sub_55E1D0(void* dst, void* src);
extern "C" void __cdecl sub_40DB00(void* self, void* arg);

extern "C" bool __stdcall str_neq(void* a, void* b);
extern "C" void* __stdcall str_ctor_copy(void* dst, void* src);

void S::f(void* arg) {
    if (str_neq(field130, arg)) {
        void* p = sub_6A0920(0x1c);
        void* q;
        if (p) {
            q = str_ctor_copy(p, arg);
        } else {
            q = 0;
        }
        sub_55E1D0(&field130, q);
        sub_40DB00(this, (void*)0x975770);
    }
}
