// from server: 100% by king_originala
// roc 2008-06 00490eb0  unit: RBX::VHumanoid::?$FactoryProduct::Creator  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00490eb0
//
// 00490eb0  64a100000000         mov eax, dword ptr fs:[0]
// 00490eb6  6aff                 push -1
// 00490eb8  6858647c00           push 0x7c6458
// 00490ebd  50                   push eax
// 00490ebe  64892500000000       mov dword ptr fs:[0], esp
// 00490ec5  56                   push esi
// 00490ec6  8bf1                 mov esi, ecx
// 00490ec8  8d442414             lea eax, [esp + 0x14]
// 00490ecc  50                   push eax
// 00490ecd  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00490ed5  e866c5ffff           call 0x48d440
// 00490eda  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00490ede  894e20               mov dword ptr [esi + 0x20], ecx
// 00490ee1  8d4c2414             lea ecx, [esp + 0x14]
// 00490ee5  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 00490eed  e8aec8ffff           call 0x48d7a0
// 00490ef2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00490ef6  8bc6                 mov eax, esi
// 00490ef8  64890d00000000       mov dword ptr fs:[0], ecx
// 00490eff  5e                   pop esi
// 00490f00  83c40c               add esp, 0xc
// 00490f03  c22400               ret 0x24

struct Value {
    unsigned char data[32];
    ~Value();
};

struct Base {
    unsigned char data[32];
    Base(const Value &value);
};

struct S : Base {
    int field;
    S(Value value, int n);
};

S::S(Value value, int n) : Base(value), field(n)
{
}
