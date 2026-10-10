// from server: 58% by colin
// roc 2007-08 00592300  unit: RBX::VVisit::?$FactoryProduct  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00592300
//
// 00592300  6aff                 push -1
// 00592302  68416e7500           push 0x756e41
// 00592307  64a100000000         mov eax, dword ptr fs:[0]
// 0059230d  50                   push eax
// 0059230e  64892500000000       mov dword ptr fs:[0], esp
// 00592315  51                   push ecx
// 00592316  8b442414             mov eax, dword ptr [esp + 0x14]
// 0059231a  89442414             mov dword ptr [esp + 0x14], eax
// 0059231e  890424               mov dword ptr [esp], eax
// 00592321  85c0                 test eax, eax
// 00592323  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0059232b  7421                 je 0x59234e
// 0059232d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00592331  8b11                 mov edx, dword ptr [ecx]
// 00592333  56                   push esi
// 00592334  57                   push edi
// 00592335  8d7104               lea esi, [ecx + 4]
// 00592338  8d7804               lea edi, [eax + 4]
// 0059233b  56                   push esi
// 0059233c  8bcf                 mov ecx, edi
// 0059233e  8910                 mov dword ptr [eax], edx
// 00592340  ff159ce67700         call dword ptr [0x77e69c]
// 00592346  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00592349  89471c               mov dword ptr [edi + 0x1c], eax
// 0059234c  5f                   pop edi
// 0059234d  5e                   pop esi
// 0059234e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00592352  64890d00000000       mov dword ptr fs:[0], ecx
// 00592359  83c410               add esp, 0x10
// 0059235c  c3                   ret 
// library rbxgs v8datamodel/Visit.cpp (function ?$FactoryProduct@VVisit@RBX@@...)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: rbxgs v8datamodel/Visit.cpp

struct RBXString {
    void assign(const RBXString& other);
    char pad[0x20];
};

struct FactoryProduct {
    RBXString value;
    FactoryProduct(const FactoryProduct& other);
};

FactoryProduct::FactoryProduct(const FactoryProduct& other)
{
    value.assign(other.value);
}
