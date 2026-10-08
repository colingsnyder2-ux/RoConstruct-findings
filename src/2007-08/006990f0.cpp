// from server: 77% by colin
// roc 2007-08 006990f0  unit: CXTPPropertyGridItemConstraint  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006990f0
//
// 006990f0  56                   push esi
// 006990f1  8bf1                 mov esi, ecx
// 006990f3  8d4e20               lea ecx, [esi + 0x20]
// 006990f6  ff15bcdd7700         call dword ptr [0x77ddbc]
// 006990fc  8bce                 mov ecx, esi
// 006990fe  e89775f9ff           call 0x63069a
// 00699103  f644240801           test byte ptr [esp + 8], 1
// 00699108  7409                 je 0x699113
// 0069910a  56                   push esi
// 0069910b  e8526bf9ff           call 0x62fc62
// 00699110  83c404               add esp, 4
// 00699113  8bc6                 mov eax, esi
// 00699115  5e                   pop esi
// 00699116  c20400               ret 4

struct CXTPPropertyGridItemConstraint {
    char pad[0x20];
    void (__stdcall *field_20)();
    void destroy();
    void* scalar_deleting_dtor(unsigned int flags);
};

void CXTPPropertyGridItemConstraint::destroy() {
    extern void __stdcall sub_77ddbc();
    sub_77ddbc();
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
