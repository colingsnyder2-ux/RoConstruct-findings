// roc 2008-06 00637190  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00637190
//
// 00637190  64a100000000         mov eax, dword ptr fs:[0]
// 00637196  6aff                 push -1
// 00637198  68aea17d00           push 0x7da1ae
// 0063719d  50                   push eax
// 0063719e  b801000000           mov eax, 1
// 006371a3  64892500000000       mov dword ptr fs:[0], esp
// 006371aa  8405c0d19700         test byte ptr [0x97d1c0], al
// 006371b0  7530                 jne 0x6371e2
// 006371b2  0905c0d19700         or dword ptr [0x97d1c0], eax
// 006371b8  6830da9500           push 0x95da30
// 006371bd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006371c5  e8b63bddff           call 0x40ad80
// 006371ca  50                   push eax
// 006371cb  b900d19700           mov ecx, 0x97d100
// 006371d0  e81b97f3ff           call 0x5708f0
// 006371d5  68a00b8000           push 0x800ba0
// 006371da  e8d0a50600           call 0x6a17af
// 006371df  83c404               add esp, 4
// 006371e2  8b0c24               mov ecx, dword ptr [esp]
// 006371e5  b800d19700           mov eax, 0x97d100
// 006371ea  64890d00000000       mov dword ptr fs:[0], ecx
// 006371f1  83c40c               add esp, 0xc
// 006371f4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
