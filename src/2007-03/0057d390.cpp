// roc 2007-03 0057d390  unit: seg_00570000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057d390
//
// 0057d390  64a100000000         mov eax, dword ptr fs:[0]
// 0057d396  6aff                 push -1
// 0057d398  685e6b7500           push 0x756b5e
// 0057d39d  50                   push eax
// 0057d39e  b801000000           mov eax, 1
// 0057d3a3  64892500000000       mov dword ptr fs:[0], esp
// 0057d3aa  8405b0d38b00         test byte ptr [0x8bd3b0], al
// 0057d3b0  7530                 jne 0x57d3e2
// 0057d3b2  0905b0d38b00         or dword ptr [0x8bd3b0], eax
// 0057d3b8  68a8008a00           push 0x8a00a8
// 0057d3bd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0057d3c5  e846cdffff           call 0x57a110
// 0057d3ca  50                   push eax
// 0057d3cb  b928d38b00           mov ecx, 0x8bd328
// 0057d3d0  e80b3affff           call 0x570de0
// 0057d3d5  6830a27700           push 0x77a230
// 0057d3da  e8d41d0a00           call 0x61f1b3
// 0057d3df  83c404               add esp, 4
// 0057d3e2  8b0c24               mov ecx, dword ptr [esp]
// 0057d3e5  b828d38b00           mov eax, 0x8bd328
// 0057d3ea  64890d00000000       mov dword ptr fs:[0], ecx
// 0057d3f1  83c40c               add esp, 0xc
// 0057d3f4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
