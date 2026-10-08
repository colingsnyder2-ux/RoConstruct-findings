// roc 2008-06 0060dde0  unit: RBX::BlockBlockContact  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060dde0
//
// 0060dde0  51                   push ecx
// 0060dde1  83ec08               sub esp, 8
// 0060dde4  8bc4                 mov eax, esp
// 0060dde6  89642408             mov dword ptr [esp + 8], esp
// 0060ddea  50                   push eax
// 0060ddeb  e810cdfbff           call 0x5cab00
// 0060ddf0  e8fbb7f8ff           call 0x5995f0
// 0060ddf5  83c40c               add esp, 0xc
// 0060ddf8  c3                   ret 
// library rbxgs/tool\MegaDragger.cpp (function ?mousePartAlive@MegaDragger@RBX@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/MegaDragger.cpp
