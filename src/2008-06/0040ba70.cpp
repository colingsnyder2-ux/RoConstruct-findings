// roc 2008-06 0040ba70  unit: RBX::Reflection::Metadata::VClass::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040ba70
//
// 0040ba70  64a100000000         mov eax, dword ptr fs:[0]
// 0040ba76  6aff                 push -1
// 0040ba78  68eed17b00           push 0x7bd1ee
// 0040ba7d  50                   push eax
// 0040ba7e  b801000000           mov eax, 1
// 0040ba83  64892500000000       mov dword ptr fs:[0], esp
// 0040ba8a  840598c79600         test byte ptr [0x96c798], al
// 0040ba90  7530                 jne 0x40bac2
// 0040ba92  090598c79600         or dword ptr [0x96c798], eax
// 0040ba98  6880009300           push 0x930080
// 0040ba9d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0040baa5  e8d6f2ffff           call 0x40ad80
// 0040baaa  50                   push eax
// 0040baab  b9d8c69600           mov ecx, 0x96c6d8
// 0040bab0  e83b4e1600           call 0x5708f0
// 0040bab5  6880a27f00           push 0x7fa280
// 0040baba  e8f05c2900           call 0x6a17af
// 0040babf  83c404               add esp, 4
// 0040bac2  8b0c24               mov ecx, dword ptr [esp]
// 0040bac5  b8d8c69600           mov eax, 0x96c6d8
// 0040baca  64890d00000000       mov dword ptr fs:[0], ecx
// 0040bad1  83c40c               add esp, 0xc
// 0040bad4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
