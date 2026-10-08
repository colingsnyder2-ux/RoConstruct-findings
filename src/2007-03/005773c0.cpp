// roc 2007-03 005773c0  unit: seg_00570000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005773c0
//
// 005773c0  64a100000000         mov eax, dword ptr fs:[0]
// 005773c6  6aff                 push -1
// 005773c8  687e657500           push 0x75657e
// 005773cd  50                   push eax
// 005773ce  b801000000           mov eax, 1
// 005773d3  64892500000000       mov dword ptr fs:[0], esp
// 005773da  8405b0cf8b00         test byte ptr [0x8bcfb0], al
// 005773e0  7525                 jne 0x577407
// 005773e2  0905b0cf8b00         or dword ptr [0x8bcfb0], eax
// 005773e8  b920cf8b00           mov ecx, 0x8bcf20
// 005773ed  c744240800000000     mov dword ptr [esp + 8], 0
// 005773f5  e816350600           call 0x5da910
// 005773fa  6840a17700           push 0x77a140
// 005773ff  e8af7d0a00           call 0x61f1b3
// 00577404  83c404               add esp, 4
// 00577407  8b0c24               mov ecx, dword ptr [esp]
// 0057740a  b820cf8b00           mov eax, 0x8bcf20
// 0057740f  64890d00000000       mov dword ptr fs:[0], ecx
// 00577416  83c40c               add esp, 0xc
// 00577419  c3                   ret 
// library rbxgs/gui\GuiDraw.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GuiDraw.cpp
