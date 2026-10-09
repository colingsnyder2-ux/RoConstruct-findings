// roc 2008-06 005c36c0  unit: RBX::VSparkles::?$FactoryProduct::Creator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c36c0
//
// 005c36c0  64a100000000         mov eax, dword ptr fs:[0]
// 005c36c6  6aff                 push -1
// 005c36c8  687e477d00           push 0x7d477e
// 005c36cd  50                   push eax
// 005c36ce  b801000000           mov eax, 1
// 005c36d3  64892500000000       mov dword ptr fs:[0], esp
// 005c36da  8405e08f9700         test byte ptr [0x978fe0], al
// 005c36e0  7530                 jne 0x5c3712
// 005c36e2  0905e08f9700         or dword ptr [0x978fe0], eax
// 005c36e8  6870e08300           push 0x83e070
// 005c36ed  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c36f5  e8d6d1ffff           call 0x5c08d0
// 005c36fa  50                   push eax
// 005c36fb  b9208f9700           mov ecx, 0x978f20
// 005c3700  e8ebd1faff           call 0x5708f0
// 005c3705  6880e77f00           push 0x7fe780
// 005c370a  e8a0e00d00           call 0x6a17af
// 005c370f  83c404               add esp, 4
// 005c3712  8b0c24               mov ecx, dword ptr [esp]
// 005c3715  b8208f9700           mov eax, 0x978f20
// 005c371a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c3721  83c40c               add esp, 0xc
// 005c3724  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
