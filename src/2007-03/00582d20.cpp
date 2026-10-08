// roc 2007-03 00582d20  unit: seg_00580000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00582d20
//
// 00582d20  64a100000000         mov eax, dword ptr fs:[0]
// 00582d26  6aff                 push -1
// 00582d28  688e6e7500           push 0x756e8e
// 00582d2d  50                   push eax
// 00582d2e  b801000000           mov eax, 1
// 00582d33  64892500000000       mov dword ptr fs:[0], esp
// 00582d3a  840588d48b00         test byte ptr [0x8bd488], al
// 00582d40  7525                 jne 0x582d67
// 00582d42  090588d48b00         or dword ptr [0x8bd488], eax
// 00582d48  b938d48b00           mov ecx, 0x8bd438
// 00582d4d  c744240800000000     mov dword ptr [esp + 8], 0
// 00582d55  e8c6e9ffff           call 0x581720
// 00582d5a  68c0a27700           push 0x77a2c0
// 00582d5f  e84fc40900           call 0x61f1b3
// 00582d64  83c404               add esp, 4
// 00582d67  8b0c24               mov ecx, dword ptr [esp]
// 00582d6a  b838d48b00           mov eax, 0x8bd438
// 00582d6f  64890d00000000       mov dword ptr fs:[0], ecx
// 00582d76  83c40c               add esp, 0xc
// 00582d79  c3                   ret 
// library rbxgs/gui\GuiDraw.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GuiDraw.cpp
