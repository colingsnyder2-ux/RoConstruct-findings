// from server: 70% by colin
// roc 2007-08 00531bf0  unit: RBX::VModelInstance::?$FactoryProduct  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00531bf0
//
// 00531bf0  50                   push eax
// 00531bf1  7a00                 jp 0x531bf3
// 00531bf3  8b86ec000000         mov eax, dword ptr [esi + 0xec]
// 00531bf9  8b4808               mov ecx, dword ptr [eax + 8]
// 00531bfc  c78431ec000000c4507a00 mov dword ptr [ecx + esi + 0xec], 0x7a50c4
// 00531c07  8bc6                 mov eax, esi
// 00531c09  5e                   pop esi
// 00531c0a  c20800               ret 8

struct S {
    char pad[0xec];
    void* field_ec;
    S* method(int a, int b);
};

S* S::method(int a, int b) {
    void* p = field_ec;
    int* q = *(int**)((char*)p + 8);
    *(int*)((char*)q + (int)this + 0xec) = 0x7a50c4;
    return this;
}
