// roc 2009-12 00781c30  unit: RBX::BlockBlockContact  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00781c30
//
// 00781c30  51                   push ecx
// 00781c31  83ec08               sub esp, 8
// 00781c34  8bc4                 mov eax, esp
// 00781c36  89642408             mov dword ptr [esp + 8], esp
// 00781c3a  50                   push eax
// 00781c3b  e8a010f2ff           call 0x6a2ce0
// 00781c40  e87b9df4ff           call 0x6cb9c0
// 00781c45  83c40c               add esp, 0xc
// 00781c48  c3                   ret 
// library rbxgs/tool\MegaDragger.cpp (function ?mousePartAlive@MegaDragger@RBX@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/MegaDragger.cpp
