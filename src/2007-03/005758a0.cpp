// roc 2007-03 005758a0  unit: seg_00570000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005758a0
//
// 005758a0  64a100000000         mov eax, dword ptr fs:[0]
// 005758a6  6aff                 push -1
// 005758a8  68fe647500           push 0x7564fe
// 005758ad  50                   push eax
// 005758ae  b801000000           mov eax, 1
// 005758b3  64892500000000       mov dword ptr fs:[0], esp
// 005758ba  840588ce8b00         test byte ptr [0x8bce88], al
// 005758c0  7525                 jne 0x5758e7
// 005758c2  090588ce8b00         or dword ptr [0x8bce88], eax
// 005758c8  b9f8cd8b00           mov ecx, 0x8bcdf8
// 005758cd  c744240800000000     mov dword ptr [esp + 8], 0
// 005758d5  e8d6fcffff           call 0x5755b0
// 005758da  68f0a07700           push 0x77a0f0
// 005758df  e8cf980a00           call 0x61f1b3
// 005758e4  83c404               add esp, 4
// 005758e7  8b0c24               mov ecx, dword ptr [esp]
// 005758ea  b8f8cd8b00           mov eax, 0x8bcdf8
// 005758ef  64890d00000000       mov dword ptr fs:[0], ecx
// 005758f6  83c40c               add esp, 0xc
// 005758f9  c3                   ret 
// library rbxgs/gui\GuiDraw.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GuiDraw.cpp
