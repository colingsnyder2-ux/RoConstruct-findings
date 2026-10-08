// roc 2007-03 00590040  unit: seg_00590000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00590040
//
// 00590040  64a100000000         mov eax, dword ptr fs:[0]
// 00590046  6aff                 push -1
// 00590048  687e7c7500           push 0x757c7e
// 0059004d  50                   push eax
// 0059004e  b801000000           mov eax, 1
// 00590053  64892500000000       mov dword ptr fs:[0], esp
// 0059005a  840560e68b00         test byte ptr [0x8be660], al
// 00590060  7525                 jne 0x590087
// 00590062  090560e68b00         or dword ptr [0x8be660], eax
// 00590068  b9d0e58b00           mov ecx, 0x8be5d0
// 0059006d  c744240800000000     mov dword ptr [esp + 8], 0
// 00590075  e836feffff           call 0x58feb0
// 0059007a  6820a97700           push 0x77a920
// 0059007f  e82ff10800           call 0x61f1b3
// 00590084  83c404               add esp, 4
// 00590087  8b0c24               mov ecx, dword ptr [esp]
// 0059008a  b8d0e58b00           mov eax, 0x8be5d0
// 0059008f  64890d00000000       mov dword ptr fs:[0], ecx
// 00590096  83c40c               add esp, 0xc
// 00590099  c3                   ret 
// library rbxgs/gui\GuiDraw.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GuiDraw.cpp
