// from server: 49% by colin
// roc 2007-08 004074e0  unit: boost::detail::sp_counted_base  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004074e0

extern "C" void* __cdecl operator_new(unsigned int size);

struct sp_counted_impl_p {
    void* vtable;
    int use_count;
    int weak_count;
    void* ptr;
};

struct S {
    void* field_0;
    S(void* p, int unused);
};

S::S(void* p, int unused) {
    field_0 = 0;
    sp_counted_impl_p* sc = (sp_counted_impl_p*)operator_new(0x14);
    if (sc != 0) {
        sc->use_count = 1;
        sc->weak_count = 1;
        sc->vtable = (void*)0x785078;
        sc->ptr = p;
    } else {
        sc = 0;
    }
    field_0 = sc;
}
