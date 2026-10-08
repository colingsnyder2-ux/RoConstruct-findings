// roc 2010-06 00795a30  unit: PasteVerb  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00795a30
//
// 00795a30  80790400             cmp byte ptr [ecx + 4], 0
// 00795a34  7410                 je 0x795a46
// 00795a36  8b01                 mov eax, dword ptr [ecx]
// 00795a38  50                   push eax
// 00795a39  ff15b0a29e00         call dword ptr [0x9ea2b0]
// 00795a3f  50                   push eax
// 00795a40  ff15f0a19e00         call dword ptr [0x9ea1f0]
// 00795a46  c3                   ret 
// library rbxgs/util\boost.cpp (function ??1ThreadPrioritySetter@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
