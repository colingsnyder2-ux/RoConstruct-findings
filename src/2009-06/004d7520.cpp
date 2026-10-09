// roc 2009-06 004d7520  unit: RBX::VHint::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d7520
//
// 004d7520  64a100000000         mov eax, dword ptr fs:[0]
// 004d7526  6aff                 push -1
// 004d7528  687eb48500           push 0x85b47e
// 004d752d  50                   push eax
// 004d752e  b801000000           mov eax, 1
// 004d7533  64892500000000       mov dword ptr fs:[0], esp
// 004d753a  840598eea300         test byte ptr [0xa3ee98], al
// 004d7540  7530                 jne 0x4d7572
// 004d7542  090598eea300         or dword ptr [0xa3ee98], eax
// 004d7548  68647fa100           push 0xa17f64
// 004d754d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004d7555  e8962ff3ff           call 0x40a4f0
// 004d755a  50                   push eax
// 004d755b  b9d8eda300           mov ecx, 0xa3edd8
// 004d7560  e87b221200           call 0x5f97e0
// 004d7565  68605d8900           push 0x895d60
// 004d756a  e88c252400           call 0x719afb
// 004d756f  83c404               add esp, 4
// 004d7572  8b0c24               mov ecx, dword ptr [esp]
// 004d7575  b8d8eda300           mov eax, 0xa3edd8
// 004d757a  64890d00000000       mov dword ptr fs:[0], ecx
// 004d7581  83c40c               add esp, 0xc
// 004d7584  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
