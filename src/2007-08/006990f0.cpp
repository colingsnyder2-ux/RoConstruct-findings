// from server: 83% by colin
struct CXTPPropertyGridItemConstraint {
    char pad[0x20];
    void* field_20;
    void destroy();
    void* scalar_deleting_dtor(unsigned int flags);
};

void CXTPPropertyGridItemConstraint::destroy() {
    extern void __stdcall sub_77ddbc(void*);
    sub_77ddbc(&field_20);
    extern void __stdcall sub_63069a(CXTPPropertyGridItemConstraint*);
    sub_63069a(this);
}

void* CXTPPropertyGridItemConstraint::scalar_deleting_dtor(unsigned int flags) {
    destroy();
    if (flags & 1) {
        extern void __cdecl sub_62fc62(void*);
        sub_62fc62(this);
    }
    return this;
}
