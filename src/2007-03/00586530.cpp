// roc 2007-03 00586530  unit: seg_00580000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00586530
//
// 00586530  64a100000000         mov eax, dword ptr fs:[0]
// 00586536  6aff                 push -1
// 00586538  685e717500           push 0x75715e
// 0058653d  50                   push eax
// 0058653e  b801000000           mov eax, 1
// 00586543  64892500000000       mov dword ptr fs:[0], esp
// 0058654a  840508d88b00         test byte ptr [0x8bd808], al
// 00586550  7525                 jne 0x586577
// 00586552  090508d88b00         or dword ptr [0x8bd808], eax
// 00586558  b978d78b00           mov ecx, 0x8bd778
// 0058655d  c744240800000000     mov dword ptr [esp + 8], 0
// 00586565  e806450500           call 0x5daa70
// 0058656a  68d0a47700           push 0x77a4d0
// 0058656f  e83f8c0900           call 0x61f1b3
// 00586574  83c404               add esp, 4
// 00586577  8b0c24               mov ecx, dword ptr [esp]
// 0058657a  b878d78b00           mov eax, 0x8bd778
// 0058657f  64890d00000000       mov dword ptr fs:[0], ecx
// 00586586  83c40c               add esp, 0xc
// 00586589  c3                   ret 
// library rbxgs/gui\GuiDraw.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GuiDraw.cpp
