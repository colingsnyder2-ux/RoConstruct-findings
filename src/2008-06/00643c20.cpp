// from server: 100% by king_originala
// roc 2008-06 00643c20  unit: RBX::HUMAN::Landed  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00643c20
//
// 00643c20  53                   push ebx
// 00643c21  56                   push esi
// 00643c22  8bf1                 mov esi, ecx
// 00643c24  8b4e08               mov ecx, dword ptr [esi + 8]
// 00643c27  e8f454f9ff           call 0x5d9120
// 00643c2c  8a5c240c             mov bl, byte ptr [esp + 0xc]
// 00643c30  85c0                 test eax, eax
// 00643c32  7418                 je 0x643c4c
// 00643c34  8b4e08               mov ecx, dword ptr [esi + 8]
// 00643c37  84db                 test bl, bl
// 00643c39  0f94c0               sete al
// 00643c3c  0fb6d0               movzx edx, al
// 00643c3f  52                   push edx
// 00643c40  e8db54f9ff           call 0x5d9120
// 00643c45  8bc8                 mov ecx, eax
// 00643c47  e89439faff           call 0x5e75e0
// 00643c4c  8b4e08               mov ecx, dword ptr [esi + 8]
// 00643c4f  e8ec54f9ff           call 0x5d9140
// 00643c54  85c0                 test eax, eax
// 00643c56  7418                 je 0x643c70
// 00643c58  8b4e08               mov ecx, dword ptr [esi + 8]
// 00643c5b  84db                 test bl, bl
// 00643c5d  0f94c0               sete al
// 00643c60  0fb6d0               movzx edx, al
// 00643c63  52                   push edx
// 00643c64  e8d754f9ff           call 0x5d9140
// 00643c69  8bc8                 mov ecx, eax
// 00643c6b  e87039faff           call 0x5e75e0
// 00643c70  5e                   pop esi
// 00643c71  5b                   pop ebx
// 00643c72  c20400               ret 4

struct Value
{
    void set(bool enabled);
};

struct Owner
{
    void* first();
    int second();
};

struct S
{
    unsigned char padding[8];
    Owner* owner;

    void f(bool enabled);
};

void S::f(bool enabled)
{
    if (owner->first())
    {
        Owner* p = owner;
        bool disabled = !enabled;
        static_cast<Value*>(p->first())->set(disabled);
    }

    if (owner->second())
    {
        Owner* p = owner;
        bool disabled = !enabled;
        reinterpret_cast<Value*>(p->second())->set(disabled);
    }
}
