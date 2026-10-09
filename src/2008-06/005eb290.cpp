// roc 2008-06 005eb290  unit: RBX::VSky::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005eb290
//
// 005eb290  64a100000000         mov eax, dword ptr fs:[0]
// 005eb296  6aff                 push -1
// 005eb298  68fe6c7d00           push 0x7d6cfe
// 005eb29d  50                   push eax
// 005eb29e  b801000000           mov eax, 1
// 005eb2a3  64892500000000       mov dword ptr fs:[0], esp
// 005eb2aa  840518ad9700         test byte ptr [0x97ad18], al
// 005eb2b0  7530                 jne 0x5eb2e2
// 005eb2b2  090518ad9700         or dword ptr [0x97ad18], eax
// 005eb2b8  68d45b9500           push 0x955bd4
// 005eb2bd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eb2c5  e8b6fae1ff           call 0x40ad80
// 005eb2ca  50                   push eax
// 005eb2cb  b958ac9700           mov ecx, 0x97ac58
// 005eb2d0  e81b56f8ff           call 0x5708f0
// 005eb2d5  6870fb7f00           push 0x7ffb70
// 005eb2da  e8d0640b00           call 0x6a17af
// 005eb2df  83c404               add esp, 4
// 005eb2e2  8b0c24               mov ecx, dword ptr [esp]
// 005eb2e5  b858ac9700           mov eax, 0x97ac58
// 005eb2ea  64890d00000000       mov dword ptr fs:[0], ecx
// 005eb2f1  83c40c               add esp, 0xc
// 005eb2f4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
