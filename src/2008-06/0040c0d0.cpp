// roc 2008-06 0040c0d0  unit: RBX::Reflection::Metadata::VFunctions::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040c0d0
//
// 0040c0d0  64a100000000         mov eax, dword ptr fs:[0]
// 0040c0d6  6aff                 push -1
// 0040c0d8  686ed27b00           push 0x7bd26e
// 0040c0dd  50                   push eax
// 0040c0de  b801000000           mov eax, 1
// 0040c0e3  64892500000000       mov dword ptr fs:[0], esp
// 0040c0ea  8405f0c99600         test byte ptr [0x96c9f0], al
// 0040c0f0  7530                 jne 0x40c122
// 0040c0f2  0905f0c99600         or dword ptr [0x96c9f0], eax
// 0040c0f8  68d0009300           push 0x9300d0
// 0040c0fd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0040c105  e876ecffff           call 0x40ad80
// 0040c10a  50                   push eax
// 0040c10b  b930c99600           mov ecx, 0x96c930
// 0040c110  e8db471600           call 0x5708f0
// 0040c115  68d0a27f00           push 0x7fa2d0
// 0040c11a  e890562900           call 0x6a17af
// 0040c11f  83c404               add esp, 4
// 0040c122  8b0c24               mov ecx, dword ptr [esp]
// 0040c125  b830c99600           mov eax, 0x96c930
// 0040c12a  64890d00000000       mov dword ptr fs:[0], ecx
// 0040c131  83c40c               add esp, 0xc
// 0040c134  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
