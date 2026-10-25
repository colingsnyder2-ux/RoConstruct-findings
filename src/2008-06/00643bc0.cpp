// from server: 100% by king_originala
// roc 2008-06 00643bc0  unit: RBX::HUMAN::Landed  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00643bc0
//
// 00643bc0  53                   push ebx
// 00643bc1  56                   push esi
// 00643bc2  8bf1                 mov esi, ecx
// 00643bc4  8b4e08               mov ecx, dword ptr [esi + 8]
// 00643bc7  e8f454f9ff           call 0x5d90c0
// 00643bcc  8a5c240c             mov bl, byte ptr [esp + 0xc]
// 00643bd0  85c0                 test eax, eax
// 00643bd2  7418                 je 0x643bec
// 00643bd4  8b4e08               mov ecx, dword ptr [esi + 8]
// 00643bd7  84db                 test bl, bl
// 00643bd9  0f94c0               sete al
// 00643bdc  0fb6d0               movzx edx, al
// 00643bdf  52                   push edx
// 00643be0  e8db54f9ff           call 0x5d90c0
// 00643be5  8bc8                 mov ecx, eax
// 00643be7  e8f439faff           call 0x5e75e0
// 00643bec  8b4e08               mov ecx, dword ptr [esi + 8]
// 00643bef  e8ec54f9ff           call 0x5d90e0
// 00643bf4  85c0                 test eax, eax
// 00643bf6  7418                 je 0x643c10
// 00643bf8  8b4e08               mov ecx, dword ptr [esi + 8]
// 00643bfb  84db                 test bl, bl
// 00643bfd  0f94c0               sete al
// 00643c00  0fb6d0               movzx edx, al
// 00643c03  52                   push edx
// 00643c04  e8d754f9ff           call 0x5d90e0
// 00643c09  8bc8                 mov ecx, eax
// 00643c0b  e8d039faff           call 0x5e75e0
// 00643c10  5e                   pop esi
// 00643c11  5b                   pop ebx
// 00643c12  c20400               ret 4

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
