// roc 2009-12 00974480  unit: seg_00970000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00974480
//
// 00974480  33c9                 xor ecx, ecx
// 00974482  51                   push ecx
// 00974483  68c0c39c00           push 0x9cc3c0
// 00974488  51                   push ecx
// 00974489  b880a56b00           mov eax, 0x6ba580
// 0097448e  50                   push eax
// 0097448f  b9f01bb900           mov ecx, 0xb91bf0
// 00974494  e8072fd4ff           call 0x6b73a0
// 00974499  6810589800           push 0x985810
// 0097449e  e88604e8ff           call 0x7f4929
// 009744a3  59                   pop ecx
// 009744a4  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ??__EpauseFunction@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
