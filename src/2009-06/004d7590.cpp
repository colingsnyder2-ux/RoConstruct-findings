// roc 2009-06 004d7590  unit: RBX::VHint::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d7590
//
// 004d7590  64a100000000         mov eax, dword ptr fs:[0]
// 004d7596  6aff                 push -1
// 004d7598  689eb48500           push 0x85b49e
// 004d759d  50                   push eax
// 004d759e  b801000000           mov eax, 1
// 004d75a3  64892500000000       mov dword ptr fs:[0], esp
// 004d75aa  840560efa300         test byte ptr [0xa3ef60], al
// 004d75b0  7530                 jne 0x4d75e2
// 004d75b2  090560efa300         or dword ptr [0xa3ef60], eax
// 004d75b8  686c7fa100           push 0xa17f6c
// 004d75bd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004d75c5  e856ffffff           call 0x4d7520
// 004d75ca  50                   push eax
// 004d75cb  b9a0eea300           mov ecx, 0xa3eea0
// 004d75d0  e80b221200           call 0x5f97e0
// 004d75d5  68505d8900           push 0x895d50
// 004d75da  e81c252400           call 0x719afb
// 004d75df  83c404               add esp, 4
// 004d75e2  8b0c24               mov ecx, dword ptr [esp]
// 004d75e5  b8a0eea300           mov eax, 0xa3eea0
// 004d75ea  64890d00000000       mov dword ptr fs:[0], ecx
// 004d75f1  83c40c               add esp, 0xc
// 004d75f4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
