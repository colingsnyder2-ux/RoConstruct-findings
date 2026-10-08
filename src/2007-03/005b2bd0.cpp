// roc 2007-03 005b2bd0  unit: seg_005b0000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b2bd0
//
// 005b2bd0  64a100000000         mov eax, dword ptr fs:[0]
// 005b2bd6  6aff                 push -1
// 005b2bd8  68ae9e7500           push 0x759eae
// 005b2bdd  50                   push eax
// 005b2bde  b801000000           mov eax, 1
// 005b2be3  64892500000000       mov dword ptr fs:[0], esp
// 005b2bea  8405e0f88b00         test byte ptr [0x8bf8e0], al
// 005b2bf0  7525                 jne 0x5b2c17
// 005b2bf2  0905e0f88b00         or dword ptr [0x8bf8e0], eax
// 005b2bf8  b950f88b00           mov ecx, 0x8bf850
// 005b2bfd  c744240800000000     mov dword ptr [esp + 8], 0
// 005b2c05  e826590000           call 0x5b8530
// 005b2c0a  68a0b47700           push 0x77b4a0
// 005b2c0f  e89fc50600           call 0x61f1b3
// 005b2c14  83c404               add esp, 4
// 005b2c17  8b0c24               mov ecx, dword ptr [esp]
// 005b2c1a  b850f88b00           mov eax, 0x8bf850
// 005b2c1f  64890d00000000       mov dword ptr fs:[0], ecx
// 005b2c26  83c40c               add esp, 0xc
// 005b2c29  c3                   ret 
// library rbxgs/gui\GuiDraw.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GuiDraw.cpp
