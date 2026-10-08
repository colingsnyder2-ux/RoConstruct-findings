// roc 2007-03 005b3b00  unit: seg_005b0000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b3b00
//
// 005b3b00  64a100000000         mov eax, dword ptr fs:[0]
// 005b3b06  6aff                 push -1
// 005b3b08  680e9f7500           push 0x759f0e
// 005b3b0d  50                   push eax
// 005b3b0e  b801000000           mov eax, 1
// 005b3b13  64892500000000       mov dword ptr fs:[0], esp
// 005b3b1a  8405d8fc8b00         test byte ptr [0x8bfcd8], al
// 005b3b20  7525                 jne 0x5b3b47
// 005b3b22  0905d8fc8b00         or dword ptr [0x8bfcd8], eax
// 005b3b28  b948fc8b00           mov ecx, 0x8bfc48
// 005b3b2d  c744240800000000     mov dword ptr [esp + 8], 0
// 005b3b35  e896bbfbff           call 0x56f6d0
// 005b3b3a  68e0b47700           push 0x77b4e0
// 005b3b3f  e86fb60600           call 0x61f1b3
// 005b3b44  83c404               add esp, 4
// 005b3b47  8b0c24               mov ecx, dword ptr [esp]
// 005b3b4a  b848fc8b00           mov eax, 0x8bfc48
// 005b3b4f  64890d00000000       mov dword ptr fs:[0], ecx
// 005b3b56  83c40c               add esp, 0xc
// 005b3b59  c3                   ret 
// library rbxgs/gui\GuiDraw.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GuiDraw.cpp
