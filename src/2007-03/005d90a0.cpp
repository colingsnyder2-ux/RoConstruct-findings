// roc 2007-03 005d90a0  unit: seg_005d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d90a0
//
// 005d90a0  51                   push ecx
// 005d90a1  83ec08               sub esp, 8
// 005d90a4  8bc4                 mov eax, esp
// 005d90a6  89642408             mov dword ptr [esp + 8], esp
// 005d90aa  50                   push eax
// 005d90ab  e80023ffff           call 0x5cb3b0
// 005d90b0  e84b96f9ff           call 0x572700
// 005d90b5  83c40c               add esp, 0xc
// 005d90b8  c3                   ret 
// library rbxgs/tool\MegaDragger.cpp (function ?mousePartAlive@MegaDragger@RBX@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/MegaDragger.cpp
