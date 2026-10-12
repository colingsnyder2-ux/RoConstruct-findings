// from server: 100% by king_originala
// roc 2008-06 00643c80  unit: RBX::HUMAN::Landed  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00643c80
//
// 00643c80  53                   push ebx
// 00643c81  56                   push esi
// 00643c82  8bf1                 mov esi, ecx
// 00643c84  8b4e08               mov ecx, dword ptr [esi + 8]
// 00643c87  e81454f9ff           call 0x5d90a0
// 00643c8c  8a5c240c             mov bl, byte ptr [esp + 0xc]
// 00643c90  85c0                 test eax, eax
// 00643c92  7418                 je 0x643cac
// 00643c94  8b4e08               mov ecx, dword ptr [esi + 8]
// 00643c97  84db                 test bl, bl
// 00643c99  0f94c0               sete al
// 00643c9c  0fb6d0               movzx edx, al
// 00643c9f  52                   push edx
// 00643ca0  e8fb53f9ff           call 0x5d90a0
// 00643ca5  8bc8                 mov ecx, eax
// 00643ca7  e83439faff           call 0x5e75e0
// 00643cac  8b4e08               mov ecx, dword ptr [esi + 8]
// 00643caf  e84c54f9ff           call 0x5d9100
// 00643cb4  85c0                 test eax, eax
// 00643cb6  7418                 je 0x643cd0
// 00643cb8  8b4e08               mov ecx, dword ptr [esi + 8]
// 00643cbb  84db                 test bl, bl
// 00643cbd  0f94c0               sete al
// 00643cc0  0fb6d0               movzx edx, al
// 00643cc3  52                   push edx
// 00643cc4  e83754f9ff           call 0x5d9100
// 00643cc9  8bc8                 mov ecx, eax
// 00643ccb  e81039faff           call 0x5e75e0
// 00643cd0  5e                   pop esi
// 00643cd1  5b                   pop ebx
// 00643cd2  c20400               ret 4

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
