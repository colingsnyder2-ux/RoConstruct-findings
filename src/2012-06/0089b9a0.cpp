// roc 2012-06 0089b9a0  unit: RBX::VHole::?$FactoryProduct  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0089b9a0
//
// 0089b9a0  51                   push ecx
// 0089b9a1  83ec08               sub esp, 8
// 0089b9a4  8bc4                 mov eax, esp
// 0089b9a6  89642408             mov dword ptr [esp + 8], esp
// 0089b9aa  50                   push eax
// 0089b9ab  e880d9b9ff           call 0x439330
// 0089b9b0  e86b58ebff           call 0x751220
// 0089b9b5  83c40c               add esp, 0xc
// 0089b9b8  c3                   ret 
// library rbxgs/tool\MegaDragger.cpp (function ?mousePartAlive@MegaDragger@RBX@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/MegaDragger.cpp
