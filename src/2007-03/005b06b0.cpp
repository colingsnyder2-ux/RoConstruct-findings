// roc 2007-03 005b06b0  unit: seg_005b0000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b06b0
//
// 005b06b0  64a100000000         mov eax, dword ptr fs:[0]
// 005b06b6  6aff                 push -1
// 005b06b8  685e9a7500           push 0x759a5e
// 005b06bd  50                   push eax
// 005b06be  b801000000           mov eax, 1
// 005b06c3  64892500000000       mov dword ptr fs:[0], esp
// 005b06ca  8405b8f58b00         test byte ptr [0x8bf5b8], al
// 005b06d0  7525                 jne 0x5b06f7
// 005b06d2  0905b8f58b00         or dword ptr [0x8bf5b8], eax
// 005b06d8  b9f0f48b00           mov ecx, 0x8bf4f0
// 005b06dd  c744240800000000     mov dword ptr [esp + 8], 0
// 005b06e5  e856feffff           call 0x5b0540
// 005b06ea  6820b07700           push 0x77b020
// 005b06ef  e8bfea0600           call 0x61f1b3
// 005b06f4  83c404               add esp, 4
// 005b06f7  8b0c24               mov ecx, dword ptr [esp]
// 005b06fa  b8f0f48b00           mov eax, 0x8bf4f0
// 005b06ff  64890d00000000       mov dword ptr fs:[0], ecx
// 005b0706  83c40c               add esp, 0xc
// 005b0709  c3                   ret 
// library rbxgs/gui\GuiDraw.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GuiDraw.cpp
