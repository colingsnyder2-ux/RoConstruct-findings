// roc 2008-06 0040b6c0  unit: RBX::Reflection::Metadata::VClasses::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040b6c0
//
// 0040b6c0  64a100000000         mov eax, dword ptr fs:[0]
// 0040b6c6  6aff                 push -1
// 0040b6c8  689ed17b00           push 0x7bd19e
// 0040b6cd  50                   push eax
// 0040b6ce  b801000000           mov eax, 1
// 0040b6d3  64892500000000       mov dword ptr fs:[0], esp
// 0040b6da  8405c0c69600         test byte ptr [0x96c6c0], al
// 0040b6e0  7530                 jne 0x40b712
// 0040b6e2  0905c0c69600         or dword ptr [0x96c6c0], eax
// 0040b6e8  6864009300           push 0x930064
// 0040b6ed  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0040b6f5  e886f6ffff           call 0x40ad80
// 0040b6fa  50                   push eax
// 0040b6fb  b900c69600           mov ecx, 0x96c600
// 0040b700  e8eb511600           call 0x5708f0
// 0040b705  68f0a27f00           push 0x7fa2f0
// 0040b70a  e8a0602900           call 0x6a17af
// 0040b70f  83c404               add esp, 4
// 0040b712  8b0c24               mov ecx, dword ptr [esp]
// 0040b715  b800c69600           mov eax, 0x96c600
// 0040b71a  64890d00000000       mov dword ptr fs:[0], ecx
// 0040b721  83c40c               add esp, 0xc
// 0040b724  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
