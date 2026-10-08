// roc 2008-06 007f2a90  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f2a90
//
// 007f2a90  56                   push esi
// 007f2a91  6a05                 push 5
// 007f2a93  33c9                 xor ecx, ecx
// 007f2a95  51                   push ecx
// 007f2a96  b830765500           mov eax, 0x557630
// 007f2a9b  50                   push eax
// 007f2a9c  33f6                 xor esi, esi
// 007f2a9e  56                   push esi
// 007f2a9f  bab0174100           mov edx, 0x4117b0
// 007f2aa4  52                   push edx
// 007f2aa5  6890248200           push 0x822490
// 007f2aaa  68ccf78000           push 0x80f7cc
// 007f2aaf  b9543d9700           mov ecx, 0x973d54
// 007f2ab4  e8b76dd6ff           call 0x559870
// 007f2ab9  68e0c87f00           push 0x7fc8e0
// 007f2abe  e8ececeaff           call 0x6a17af
// 007f2ac3  83c404               add esp, 4
// 007f2ac6  5e                   pop esi
// 007f2ac7  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??__E?desc_Name@Instance@RBX@@2V?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
