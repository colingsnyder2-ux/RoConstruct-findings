// roc 2010-06 00717f50  unit: RBX::BlockBlockContact  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00717f50
//
// 00717f50  51                   push ecx
// 00717f51  83ec08               sub esp, 8
// 00717f54  8bc4                 mov eax, esp
// 00717f56  89642408             mov dword ptr [esp + 8], esp
// 00717f5a  50                   push eax
// 00717f5b  e8f0d4d8ff           call 0x4a5450
// 00717f60  e8bbf6f1ff           call 0x637620
// 00717f65  83c40c               add esp, 0xc
// 00717f68  c3                   ret 
// library rbxgs/tool\MegaDragger.cpp (function ?mousePartAlive@MegaDragger@RBX@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/MegaDragger.cpp
