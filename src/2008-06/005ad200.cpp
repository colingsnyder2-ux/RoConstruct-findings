// roc 2008-06 005ad200  unit: RBX::Reflection::UTuple::?$holder  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ad200
//
// 005ad200  64a100000000         mov eax, dword ptr fs:[0]
// 005ad206  6aff                 push -1
// 005ad208  684e327d00           push 0x7d324e
// 005ad20d  50                   push eax
// 005ad20e  b801000000           mov eax, 1
// 005ad213  64892500000000       mov dword ptr fs:[0], esp
// 005ad21a  8405a86c9700         test byte ptr [0x976ca8], al
// 005ad220  7530                 jne 0x5ad252
// 005ad222  0905a86c9700         or dword ptr [0x976ca8], eax
// 005ad228  6840c49400           push 0x94c440
// 005ad22d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ad235  e846dbe5ff           call 0x40ad80
// 005ad23a  50                   push eax
// 005ad23b  b9e86b9700           mov ecx, 0x976be8
// 005ad240  e8ab36fcff           call 0x5708f0
// 005ad245  68c0e17f00           push 0x7fe1c0
// 005ad24a  e860450f00           call 0x6a17af
// 005ad24f  83c404               add esp, 4
// 005ad252  8b0c24               mov ecx, dword ptr [esp]
// 005ad255  b8e86b9700           mov eax, 0x976be8
// 005ad25a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ad261  83c40c               add esp, 0xc
// 005ad264  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
