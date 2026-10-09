// roc 2008-06 005e1100  unit: RBX::VLighting::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e1100
//
// 005e1100  64a100000000         mov eax, dword ptr fs:[0]
// 005e1106  6aff                 push -1
// 005e1108  68ee637d00           push 0x7d63ee
// 005e110d  50                   push eax
// 005e110e  b801000000           mov eax, 1
// 005e1113  64892500000000       mov dword ptr fs:[0], esp
// 005e111a  840580a89700         test byte ptr [0x97a880], al
// 005e1120  7530                 jne 0x5e1152
// 005e1122  090580a89700         or dword ptr [0x97a880], eax
// 005e1128  682c449500           push 0x95442c
// 005e112d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005e1135  e8469ce2ff           call 0x40ad80
// 005e113a  50                   push eax
// 005e113b  b9c0a79700           mov ecx, 0x97a7c0
// 005e1140  e8abf7f8ff           call 0x5708f0
// 005e1145  68a0f77f00           push 0x7ff7a0
// 005e114a  e860060c00           call 0x6a17af
// 005e114f  83c404               add esp, 4
// 005e1152  8b0c24               mov ecx, dword ptr [esp]
// 005e1155  b8c0a79700           mov eax, 0x97a7c0
// 005e115a  64890d00000000       mov dword ptr fs:[0], ecx
// 005e1161  83c40c               add esp, 0xc
// 005e1164  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
