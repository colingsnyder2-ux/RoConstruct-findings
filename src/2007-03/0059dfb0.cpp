// roc 2007-03 0059dfb0  unit: seg_00590000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059dfb0
//
// 0059dfb0  64a100000000         mov eax, dword ptr fs:[0]
// 0059dfb6  6aff                 push -1
// 0059dfb8  685e8b7500           push 0x758b5e
// 0059dfbd  50                   push eax
// 0059dfbe  b801000000           mov eax, 1
// 0059dfc3  64892500000000       mov dword ptr fs:[0], esp
// 0059dfca  8405e0e98b00         test byte ptr [0x8be9e0], al
// 0059dfd0  7525                 jne 0x59dff7
// 0059dfd2  0905e0e98b00         or dword ptr [0x8be9e0], eax
// 0059dfd8  b950e98b00           mov ecx, 0x8be950
// 0059dfdd  c744240800000000     mov dword ptr [esp + 8], 0
// 0059dfe5  e806feffff           call 0x59ddf0
// 0059dfea  68b0aa7700           push 0x77aab0
// 0059dfef  e8bf110800           call 0x61f1b3
// 0059dff4  83c404               add esp, 4
// 0059dff7  8b0c24               mov ecx, dword ptr [esp]
// 0059dffa  b850e98b00           mov eax, 0x8be950
// 0059dfff  64890d00000000       mov dword ptr fs:[0], ecx
// 0059e006  83c40c               add esp, 0xc
// 0059e009  c3                   ret 
// library rbxgs/gui\GuiDraw.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GuiDraw.cpp
