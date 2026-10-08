// roc 2007-03 00544b80  unit: seg_00540000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00544b80
//
// 00544b80  837c2404ff           cmp dword ptr [esp + 4], -1
// 00544b85  7510                 jne 0x544b97
// 00544b87  817c2408ffffff7f     cmp dword ptr [esp + 8], 0x7fffffff
// 00544b8f  7506                 jne 0x544b97
// 00544b91  b801000000           mov eax, 1
// 00544b96  c3                   ret 
// 00544b97  33c0                 xor eax, eax
// 00544b99  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ?is_pos_inf@?$int_adapter@_J@date_time@boost@@SA_N_J@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
