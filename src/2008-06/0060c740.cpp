// roc 2008-06 0060c740  unit: RBX::VMotorFeature::?$FactoryProduct  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060c740
//
// 0060c740  6aff                 push -1
// 0060c742  68688b7d00           push 0x7d8b68
// 0060c747  64a100000000         mov eax, dword ptr fs:[0]
// 0060c74d  50                   push eax
// 0060c74e  64892500000000       mov dword ptr fs:[0], esp
// 0060c755  51                   push ecx
// 0060c756  56                   push esi
// 0060c757  8bf1                 mov esi, ecx
// 0060c759  89742404             mov dword ptr [esp + 4], esi
// 0060c75d  e86ef8ffff           call 0x60bfd0
// 0060c762  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0060c76a  e83170fbff           call 0x5c37a0
// 0060c76f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060c773  89461c               mov dword ptr [esi + 0x1c], eax
// 0060c776  c7068c348400         mov dword ptr [esi], 0x84348c
// 0060c77c  c746107c348400       mov dword ptr [esi + 0x10], 0x84347c
// 0060c783  c7461474348400       mov dword ptr [esi + 0x14], 0x843474
// 0060c78a  c746206c348400       mov dword ptr [esi + 0x20], 0x84346c
// 0060c791  c746245c348400       mov dword ptr [esi + 0x24], 0x84345c
// 0060c798  c746444c348400       mov dword ptr [esi + 0x44], 0x84344c
// 0060c79f  c746643c348400       mov dword ptr [esi + 0x64], 0x84343c
// 0060c7a6  c786840000002c348400 mov dword ptr [esi + 0x84], 0x84342c
// 0060c7b0  c786a40000001c348400 mov dword ptr [esi + 0xa4], 0x84341c
// 0060c7ba  c786c40000000c348400 mov dword ptr [esi + 0xc4], 0x84340c
// 0060c7c4  c78630010000f4338400 mov dword ptr [esi + 0x130], 0x8433f4
// 0060c7ce  8bc6                 mov eax, esi
// 0060c7d0  5e                   pop esi
// 0060c7d1  64890d00000000       mov dword ptr fs:[0], ecx
// 0060c7d8  83c410               add esp, 0x10
// 0060c7db  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$DescribedCreatable@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
