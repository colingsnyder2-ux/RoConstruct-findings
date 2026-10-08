// roc 2007-03 005b2b70  unit: seg_005b0000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b2b70
//
// 005b2b70  64a100000000         mov eax, dword ptr fs:[0]
// 005b2b76  6aff                 push -1
// 005b2b78  688e9e7500           push 0x759e8e
// 005b2b7d  50                   push eax
// 005b2b7e  b801000000           mov eax, 1
// 005b2b83  64892500000000       mov dword ptr fs:[0], esp
// 005b2b8a  840548f88b00         test byte ptr [0x8bf848], al
// 005b2b90  7525                 jne 0x5b2bb7
// 005b2b92  090548f88b00         or dword ptr [0x8bf848], eax
// 005b2b98  b9b8f78b00           mov ecx, 0x8bf7b8
// 005b2b9d  c744240800000000     mov dword ptr [esp + 8], 0
// 005b2ba5  e8e6550400           call 0x5f8190
// 005b2baa  68b0b47700           push 0x77b4b0
// 005b2baf  e8ffc50600           call 0x61f1b3
// 005b2bb4  83c404               add esp, 4
// 005b2bb7  8b0c24               mov ecx, dword ptr [esp]
// 005b2bba  b8b8f78b00           mov eax, 0x8bf7b8
// 005b2bbf  64890d00000000       mov dword ptr fs:[0], ecx
// 005b2bc6  83c40c               add esp, 0xc
// 005b2bc9  c3                   ret 
// library rbxgs/gui\GuiDraw.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GuiDraw.cpp
