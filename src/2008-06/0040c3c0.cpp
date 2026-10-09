// roc 2008-06 0040c3c0  unit: RBX::Reflection::Metadata::VEvents::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040c3c0
//
// 0040c3c0  64a100000000         mov eax, dword ptr fs:[0]
// 0040c3c6  6aff                 push -1
// 0040c3c8  689ed27b00           push 0x7bd29e
// 0040c3cd  50                   push eax
// 0040c3ce  b801000000           mov eax, 1
// 0040c3d3  64892500000000       mov dword ptr fs:[0], esp
// 0040c3da  8405b8ca9600         test byte ptr [0x96cab8], al
// 0040c3e0  7530                 jne 0x40c412
// 0040c3e2  0905b8ca9600         or dword ptr [0x96cab8], eax
// 0040c3e8  68ec009300           push 0x9300ec
// 0040c3ed  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0040c3f5  e886e9ffff           call 0x40ad80
// 0040c3fa  50                   push eax
// 0040c3fb  b9f8c99600           mov ecx, 0x96c9f8
// 0040c400  e8eb441600           call 0x5708f0
// 0040c405  68c0a27f00           push 0x7fa2c0
// 0040c40a  e8a0532900           call 0x6a17af
// 0040c40f  83c404               add esp, 4
// 0040c412  8b0c24               mov ecx, dword ptr [esp]
// 0040c415  b8f8c99600           mov eax, 0x96c9f8
// 0040c41a  64890d00000000       mov dword ptr fs:[0], ecx
// 0040c421  83c40c               add esp, 0xc
// 0040c424  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
