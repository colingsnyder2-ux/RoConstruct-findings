// roc 2007-03 00544b60  unit: seg_00540000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00544b60
//
// 00544b60  837c240400           cmp dword ptr [esp + 4], 0
// 00544b65  7510                 jne 0x544b77
// 00544b67  817c240800000080     cmp dword ptr [esp + 8], 0x80000000
// 00544b6f  7506                 jne 0x544b77
// 00544b71  b801000000           mov eax, 1
// 00544b76  c3                   ret 
// 00544b77  33c0                 xor eax, eax
// 00544b79  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ?is_neg_inf@?$int_adapter@_J@date_time@boost@@SA_N_J@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
