// roc 2007-03 0052d600  unit: seg_00520000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052d600
//
// 0052d600  64a100000000         mov eax, dword ptr fs:[0]
// 0052d606  6aff                 push -1
// 0052d608  688e117500           push 0x75118e
// 0052d60d  50                   push eax
// 0052d60e  b801000000           mov eax, 1
// 0052d613  64892500000000       mov dword ptr fs:[0], esp
// 0052d61a  840530b18b00         test byte ptr [0x8bb130], al
// 0052d620  7525                 jne 0x52d647
// 0052d622  090530b18b00         or dword ptr [0x8bb130], eax
// 0052d628  b928b18b00           mov ecx, 0x8bb128
// 0052d62d  c744240800000000     mov dword ptr [esp + 8], 0
// 0052d635  e8f6931f00           call 0x726a30
// 0052d63a  6820937700           push 0x779320
// 0052d63f  e86f1b0f00           call 0x61f1b3
// 0052d644  83c404               add esp, 4
// 0052d647  8b0c24               mov ecx, dword ptr [esp]
// 0052d64a  b828b18b00           mov eax, 0x8bb128
// 0052d64f  64890d00000000       mov dword ptr fs:[0], ecx
// 0052d656  83c40c               add esp, 0xc
// 0052d659  c3                   ret 
// library rbxgs/gui\GuiDraw.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GuiDraw.cpp
