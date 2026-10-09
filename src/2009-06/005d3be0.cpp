// roc 2009-06 005d3be0  unit: RBX::VSelection::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d3be0
//
// 005d3be0  64a100000000         mov eax, dword ptr fs:[0]
// 005d3be6  6aff                 push -1
// 005d3be8  689e2b8600           push 0x862b9e
// 005d3bed  50                   push eax
// 005d3bee  b801000000           mov eax, 1
// 005d3bf3  64892500000000       mov dword ptr fs:[0], esp
// 005d3bfa  84050841a400         test byte ptr [0xa44108], al
// 005d3c00  7530                 jne 0x5d3c32
// 005d3c02  09050841a400         or dword ptr [0xa44108], eax
// 005d3c08  6808528d00           push 0x8d5208
// 005d3c0d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005d3c15  e8d668e3ff           call 0x40a4f0
// 005d3c1a  50                   push eax
// 005d3c1b  b94840a400           mov ecx, 0xa44048
// 005d3c20  e8bb5b0200           call 0x5f97e0
// 005d3c25  6800768900           push 0x897600
// 005d3c2a  e8cc5e1400           call 0x719afb
// 005d3c2f  83c404               add esp, 4
// 005d3c32  8b0c24               mov ecx, dword ptr [esp]
// 005d3c35  b84840a400           mov eax, 0xa44048
// 005d3c3a  64890d00000000       mov dword ptr fs:[0], ecx
// 005d3c41  83c40c               add esp, 0xc
// 005d3c44  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
