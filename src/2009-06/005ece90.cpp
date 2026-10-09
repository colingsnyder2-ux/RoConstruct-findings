// roc 2009-06 005ece90  unit: seg_005e0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ece90
//
// 005ece90  64a100000000         mov eax, dword ptr fs:[0]
// 005ece96  6aff                 push -1
// 005ece98  68de568600           push 0x8656de
// 005ece9d  50                   push eax
// 005ece9e  b801000000           mov eax, 1
// 005ecea3  64892500000000       mov dword ptr fs:[0], esp
// 005eceaa  8405c08ea400         test byte ptr [0xa48ec0], al
// 005eceb0  7530                 jne 0x5ecee2
// 005eceb2  0905c08ea400         or dword ptr [0xa48ec0], eax
// 005eceb8  68a4afa100           push 0xa1afa4
// 005ecebd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ecec5  e826d6e1ff           call 0x40a4f0
// 005ececa  50                   push eax
// 005ececb  b9008ea400           mov ecx, 0xa48e00
// 005eced0  e80bc90000           call 0x5f97e0
// 005eced5  6870848900           push 0x898470
// 005eceda  e81ccc1200           call 0x719afb
// 005ecedf  83c404               add esp, 4
// 005ecee2  8b0c24               mov ecx, dword ptr [esp]
// 005ecee5  b8008ea400           mov eax, 0xa48e00
// 005eceea  64890d00000000       mov dword ptr fs:[0], ecx
// 005ecef1  83c40c               add esp, 0xc
// 005ecef4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
