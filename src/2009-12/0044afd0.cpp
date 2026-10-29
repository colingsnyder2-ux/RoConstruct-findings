// roc 2009-12 0044afd0  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0044afd0
//
// 0044afd0  a100dcb700           mov eax, dword ptr [0xb7dc00]
// 0044afd5  85c0                 test eax, eax
// 0044afd7  7507                 jne 0x44afe0
// 0044afd9  8b01                 mov eax, dword ptr [ecx]
// 0044afdb  a300dcb700           mov dword ptr [0xb7dc00], eax
// 0044afe0  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000008@@QAEHXZ)

namespace ns_ROCX000008 {
// from server: 100% by why2
struct S {
    int f();
};

int S::f() {
    extern int g_0xa42ccc;
    if (g_0xa42ccc == 0) {
        g_0xa42ccc = *(int*)this;
    }
    return g_0xa42ccc;
}
}
