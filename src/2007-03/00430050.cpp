// roc 2007-03 00430050  unit: seg_00430000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00430050
//
// 00430050  51                   push ecx
// 00430051  e86a060300           call 0x4606c0
// 00430056  59                   pop ecx
// 00430057  c3                   ret 
// library rbxgs/util\Log.cpp (function ?_Register@facet@locale@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Log.cpp
