// roc 2009-06 005ecf00  unit: seg_005e0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ecf00
//
// 005ecf00  64a100000000         mov eax, dword ptr fs:[0]
// 005ecf06  6aff                 push -1
// 005ecf08  68fe568600           push 0x8656fe
// 005ecf0d  50                   push eax
// 005ecf0e  b801000000           mov eax, 1
// 005ecf13  64892500000000       mov dword ptr fs:[0], esp
// 005ecf1a  8405888fa400         test byte ptr [0xa48f88], al
// 005ecf20  7530                 jne 0x5ecf52
// 005ecf22  0905888fa400         or dword ptr [0xa48f88], eax
// 005ecf28  68b0afa100           push 0xa1afb0
// 005ecf2d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ecf35  e8b6d5e1ff           call 0x40a4f0
// 005ecf3a  50                   push eax
// 005ecf3b  b9c88ea400           mov ecx, 0xa48ec8
// 005ecf40  e89bc80000           call 0x5f97e0
// 005ecf45  6860848900           push 0x898460
// 005ecf4a  e8accb1200           call 0x719afb
// 005ecf4f  83c404               add esp, 4
// 005ecf52  8b0c24               mov ecx, dword ptr [esp]
// 005ecf55  b8c88ea400           mov eax, 0xa48ec8
// 005ecf5a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ecf61  83c40c               add esp, 0xc
// 005ecf64  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
