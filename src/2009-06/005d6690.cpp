// roc 2009-06 005d6690  unit: RBX::VRunService::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d6690
//
// 005d6690  64a100000000         mov eax, dword ptr fs:[0]
// 005d6696  6aff                 push -1
// 005d6698  689e2e8600           push 0x862e9e
// 005d669d  50                   push eax
// 005d669e  b801000000           mov eax, 1
// 005d66a3  64892500000000       mov dword ptr fs:[0], esp
// 005d66aa  84056842a400         test byte ptr [0xa44268], al
// 005d66b0  7530                 jne 0x5d66e2
// 005d66b2  09056842a400         or dword ptr [0xa44268], eax
// 005d66b8  6828538d00           push 0x8d5328
// 005d66bd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005d66c5  e8263ee3ff           call 0x40a4f0
// 005d66ca  50                   push eax
// 005d66cb  b9a841a400           mov ecx, 0xa441a8
// 005d66d0  e80b310200           call 0x5f97e0
// 005d66d5  6860768900           push 0x897660
// 005d66da  e81c341400           call 0x719afb
// 005d66df  83c404               add esp, 4
// 005d66e2  8b0c24               mov ecx, dword ptr [esp]
// 005d66e5  b8a841a400           mov eax, 0xa441a8
// 005d66ea  64890d00000000       mov dword ptr fs:[0], ecx
// 005d66f1  83c40c               add esp, 0xc
// 005d66f4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
