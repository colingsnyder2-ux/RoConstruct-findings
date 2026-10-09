// roc 2009-06 004bc490  unit: RBX::VPants::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004bc490
//
// 004bc490  64a100000000         mov eax, dword ptr fs:[0]
// 004bc496  6aff                 push -1
// 004bc498  689e928500           push 0x85929e
// 004bc49d  50                   push eax
// 004bc49e  b801000000           mov eax, 1
// 004bc4a3  64892500000000       mov dword ptr fs:[0], esp
// 004bc4aa  8405d8d6a300         test byte ptr [0xa3d6d8], al
// 004bc4b0  7530                 jne 0x4bc4e2
// 004bc4b2  0905d8d6a300         or dword ptr [0xa3d6d8], eax
// 004bc4b8  68b83d8e00           push 0x8e3db8
// 004bc4bd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004bc4c5  e826e0f4ff           call 0x40a4f0
// 004bc4ca  50                   push eax
// 004bc4cb  b918d6a300           mov ecx, 0xa3d618
// 004bc4d0  e80bd31300           call 0x5f97e0
// 004bc4d5  6800518900           push 0x895100
// 004bc4da  e81cd62500           call 0x719afb
// 004bc4df  83c404               add esp, 4
// 004bc4e2  8b0c24               mov ecx, dword ptr [esp]
// 004bc4e5  b818d6a300           mov eax, 0xa3d618
// 004bc4ea  64890d00000000       mov dword ptr fs:[0], ecx
// 004bc4f1  83c40c               add esp, 0xc
// 004bc4f4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
