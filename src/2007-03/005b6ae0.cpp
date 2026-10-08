// roc 2007-03 005b6ae0  unit: seg_005b0000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b6ae0
//
// 005b6ae0  64a100000000         mov eax, dword ptr fs:[0]
// 005b6ae6  6aff                 push -1
// 005b6ae8  68bea07500           push 0x75a0be
// 005b6aed  50                   push eax
// 005b6aee  b801000000           mov eax, 1
// 005b6af3  64892500000000       mov dword ptr fs:[0], esp
// 005b6afa  8405d0fe8b00         test byte ptr [0x8bfed0], al
// 005b6b00  7525                 jne 0x5b6b27
// 005b6b02  0905d0fe8b00         or dword ptr [0x8bfed0], eax
// 005b6b08  b940fe8b00           mov ecx, 0x8bfe40
// 005b6b0d  c744240800000000     mov dword ptr [esp + 8], 0
// 005b6b15  e8f61b0000           call 0x5b8710
// 005b6b1a  6850b57700           push 0x77b550
// 005b6b1f  e88f860600           call 0x61f1b3
// 005b6b24  83c404               add esp, 4
// 005b6b27  8b0c24               mov ecx, dword ptr [esp]
// 005b6b2a  b840fe8b00           mov eax, 0x8bfe40
// 005b6b2f  64890d00000000       mov dword ptr fs:[0], ecx
// 005b6b36  83c40c               add esp, 0xc
// 005b6b39  c3                   ret 
// library rbxgs/gui\GuiDraw.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GuiDraw.cpp
