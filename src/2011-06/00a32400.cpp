// roc 2011-06 00a32400  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32400
//
// 00a32400  a18461cb00           mov eax, dword ptr [0xcb6184]
// 00a32405  85c0                 test eax, eax
// 00a32407  7409                 je 0xa32412
// 00a32409  50                   push eax
// 00a3240a  e8497cddff           call 0x80a058
// 00a3240f  83c404               add esp, 4
// 00a32412  c7056861cb00e0bea500 mov dword ptr [0xcb6168], 0xa5bee0
// 00a3241c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
