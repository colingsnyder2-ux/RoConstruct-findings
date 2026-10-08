// from server: 3% by colin
// roc 2007-08 005e3b50  unit: RBX::Unlocked  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e3b50
//
// 005e3b50  83ec20               sub esp, 0x20
// 005e3b53  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005e3b57  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005e3b5b  56                   push esi
// 005e3b5c  50                   push eax
// 005e3b5d  51                   push ecx
// 005e3b5e  8d542410             lea edx, [esp + 0x10]
// 005e3b62  52                   push edx
// 005e3b63  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e3b6b  e850ffffff           call 0x5e3ac0
// 005e3b70  8b742434             mov esi, dword ptr [esp + 0x34]
// 005e3b74  8d442414             lea eax, [esp + 0x14]
// 005e3b78  50                   push eax
// 005e3b79  56                   push esi
// 005e3b7a  e811fdffff           call 0x5e3890
// 005e3b7f  83c414               add esp, 0x14
// 005e3b82  8bc6                 mov eax, esi
// 005e3b84  5e                   pop esi
// 005e3b85  83c420               add esp, 0x20
// 005e3b88  c3                   ret 

struct HitTestFilter {
    enum Result { STOP_TEST = 0, INCLUDE_PRIM = 1 };
};

struct Primitive;

struct Unlocked : HitTestFilter {
    static bool unlocked(const Primitive* testMe);
    Result filterResult(const Primitive* testMe) const;
};

bool Unlocked::unlocked(const Primitive* testMe) {
    return false;
}

HitTestFilter::Result Unlocked::filterResult(const Primitive* testMe) const {
    return unlocked(testMe) ? HitTestFilter::INCLUDE_PRIM : HitTestFilter::STOP_TEST;
}
