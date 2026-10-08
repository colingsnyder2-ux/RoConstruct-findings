// from server: 93% by colin
// roc 2007-08 005e9aa0  unit: RBX::VFlagStand::?$FactoryProduct  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e9aa0
//
// 005e9aa0  56                   push esi
// 005e9aa1  8bf1                 mov esi, ecx
// 005e9aa3  e888fdffff           call 0x5e9830
// 005e9aa8  f644240801           test byte ptr [esp + 8], 1
// 005e9aad  8b8698020000         mov eax, dword ptr [esi + 0x298]
// 005e9ab3  c78694020000ac4c7a00 mov dword ptr [esi + 0x294], 0x7a4cac
// 005e9abd  8b4804               mov ecx, dword ptr [eax + 4]
// 005e9ac0  c7843198020000a44c7a00 mov dword ptr [ecx + esi + 0x298], 0x7a4ca4
// 005e9acb  740a                 je 0x5e9ad7
// 005e9acd  56                   push esi
// 005e9ace  ff15c4e67700         call dword ptr [0x77e6c4]
// 005e9ad4  83c404               add esp, 4
// 005e9ad7  8bc6                 mov eax, esi
// 005e9ad9  5e                   pop esi
// 005e9ada  c20400               ret 4

struct RBX_VFlagStand_FactoryProduct {
    char pad[0x294];
    int field_294;
    int field_298;
    void* destroy(char);
};

extern "C" void __stdcall free(void*);

void sub_005e9830();

void* RBX_VFlagStand_FactoryProduct::destroy(char flag)
{
    sub_005e9830();
    int* p = (int*)field_298;
    field_294 = 0x7a4cac;
    int* q = (int*)p[1];
    *(int*)((char*)q + (int)this + 0x298) = 0x7a4ca4;
    if (flag & 1) {
        free(this);
    }
    return this;
}
