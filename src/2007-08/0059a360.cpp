// from server: 100% by colin
// roc 2007-08 0059a360  unit: RBX::VCamera::?$FactoryProduct  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059a360
//
// 0059a360  83b99401000000       cmp dword ptr [ecx + 0x194], 0
// 0059a367  7425                 je 0x59a38e
// 0059a369  8b818c010000         mov eax, dword ptr [ecx + 0x18c]
// 0059a36f  83f804               cmp eax, 4
// 0059a372  740a                 je 0x59a37e
// 0059a374  83f801               cmp eax, 1
// 0059a377  7405                 je 0x59a37e
// 0059a379  83f803               cmp eax, 3
// 0059a37c  7510                 jne 0x59a38e
// 0059a37e  d9442404             fld dword ptr [esp + 4]
// 0059a382  51                   push ecx
// 0059a383  d91c24               fstp dword ptr [esp]
// 0059a386  e855f7ffff           call 0x599ae0
// 0059a38b  c20400               ret 4
// 0059a38e  d9442404             fld dword ptr [esp + 4]
// 0059a392  51                   push ecx
// 0059a393  d91c24               fstp dword ptr [esp]
// 0059a396  e865f6ffff           call 0x599a00
// 0059a39b  c20400               ret 4

struct RBX_VCamera_FactoryProduct {
    char pad[0x18c];
    int field_18c;
    char pad2[0x194 - 0x18c - 4];
    int field_194;
    void method_599ae0(float);
    void method_599a00(float);
    void target(float);
};

void RBX_VCamera_FactoryProduct::target(float f) {
    if (field_194 != 0) {
        int v = field_18c;
        if (v == 4 || v == 1 || v == 3) {
            method_599ae0(f);
            return;
        }
    }
    method_599a00(f);
}
