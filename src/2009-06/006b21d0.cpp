// roc 2009-06 006b21d0  unit: RBX::BlockBlockContact  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b21d0
//
// 006b21d0  51                   push ecx
// 006b21d1  83ec08               sub esp, 8
// 006b21d4  8bc4                 mov eax, esp
// 006b21d6  89642408             mov dword ptr [esp + 8], esp
// 006b21da  50                   push eax
// 006b21db  e85079f4ff           call 0x5f9b30
// 006b21e0  e81ba0faff           call 0x65c200
// 006b21e5  83c40c               add esp, 0xc
// 006b21e8  c3                   ret 
// library rbxgs/tool\MegaDragger.cpp (function ?mousePartAlive@MegaDragger@RBX@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/MegaDragger.cpp
