// roc 2009-12 007123e0  unit: RBX::Mechanism  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007123e0
//
// 007123e0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007123e4  33c0                 xor eax, eax
// 007123e6  394118               cmp dword ptr [ecx + 0x18], eax
// 007123e9  0f9fc0               setg al
// 007123ec  c3                   ret 
// copied from an identical function in another client (function ?isPositive@ns_ROCX00000f@@YA_NPAUMechanism@1@H@Z)

namespace ns_ROCX00000f {
// from server: 100% by why2
struct Mechanism {
    char pad[0x18];
    int field_18;
};

bool isPositive(Mechanism* m, int arg) {
    return m->field_18 > 0;
}
}
