// from server: 50% by atomic.potato
// roc 2011-06 00713dd0  unit: RBX::VSmoke::?$FactoryProduct  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00713dd0
//
// 00713dd0  f30f10442404         movss xmm0, dword ptr [esp + 4]
// 00713dd6  56                   push esi
// 00713dd7  8bf1                 mov esi, ecx
// 00713dd9  f30f108ea8000000     movss xmm1, dword ptr [esi + 0xa8]
// 00713de1  0f2ec8               ucomiss xmm1, xmm0
// 00713de4  9f                   lahf 
// 00713de5  f6c444               test ah, 0x44
// 00713de8  7b1e                 jnp 0x713e08
// 00713dea  68d836cd00           push 0xcd36d8
// 00713def  f30f1186a8000000     movss dword ptr [esi + 0xa8], xmm0
// 00713df7  e864e1cfff           call 0x411f60
// 00713dfc  686037cd00           push 0xcd3760
// 00713e01  8bce                 mov ecx, esi
// 00713e03  e858e1cfff           call 0x411f60
// 00713e08  5e                   pop esi
// 00713e09  c20400               ret 4

struct VSmoke {
    char pad[0xa8];
    float field_a8;
    void sub_411f60(const char*);
    void set(float);
};

void VSmoke::set(float v) {
    if (field_a8 != v) {
        sub_411f60((const char*)0xcd36d8);
        field_a8 = v;
        sub_411f60((const char*)0xcd3760);
    }
}
