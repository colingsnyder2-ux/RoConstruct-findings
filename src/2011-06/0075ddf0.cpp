// roc 2011-06 0075ddf0  unit: RBX::BoxSelectCommand  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0075ddf0
//
// 0075ddf0  51                   push ecx
// 0075ddf1  83ec08               sub esp, 8
// 0075ddf4  8bc4                 mov eax, esp
// 0075ddf6  89642408             mov dword ptr [esp + 8], esp
// 0075ddfa  50                   push eax
// 0075ddfb  e83019feff           call 0x73f730
// 0075de00  e82be9f0ff           call 0x66c730
// 0075de05  83c40c               add esp, 0xc
// 0075de08  c3                   ret 
// library rbxgs/tool\MegaDragger.cpp (function ?mousePartAlive@MegaDragger@RBX@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/MegaDragger.cpp
