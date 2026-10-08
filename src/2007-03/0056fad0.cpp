// roc 2007-03 0056fad0  unit: seg_00560000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056fad0
//
// 0056fad0  64a100000000         mov eax, dword ptr fs:[0]
// 0056fad6  6aff                 push -1
// 0056fad8  685e607500           push 0x75605e
// 0056fadd  50                   push eax
// 0056fade  b801000000           mov eax, 1
// 0056fae3  64892500000000       mov dword ptr fs:[0], esp
// 0056faea  840510c88b00         test byte ptr [0x8bc810], al
// 0056faf0  7525                 jne 0x56fb17
// 0056faf2  090510c88b00         or dword ptr [0x8bc810], eax
// 0056faf8  b908c88b00           mov ecx, 0x8bc808
// 0056fafd  c744240800000000     mov dword ptr [esp + 8], 0
// 0056fb05  e8266f1b00           call 0x726a30
// 0056fb0a  68209d7700           push 0x779d20
// 0056fb0f  e89ff60a00           call 0x61f1b3
// 0056fb14  83c404               add esp, 4
// 0056fb17  8b0c24               mov ecx, dword ptr [esp]
// 0056fb1a  b808c88b00           mov eax, 0x8bc808
// 0056fb1f  64890d00000000       mov dword ptr fs:[0], ecx
// 0056fb26  83c40c               add esp, 0xc
// 0056fb29  c3                   ret 
// library rbxgs/gui\GuiDraw.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GuiDraw.cpp
