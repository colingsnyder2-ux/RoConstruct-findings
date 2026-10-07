// roc 2011-06 00a32420  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32420
//
// 00a32420  a1045ecb00           mov eax, dword ptr [0xcb5e04]
// 00a32425  85c0                 test eax, eax
// 00a32427  7409                 je 0xa32432
// 00a32429  50                   push eax
// 00a3242a  e8297cddff           call 0x80a058
// 00a3242f  83c404               add esp, 4
// 00a32432  c705e85dcb00e0bea500 mov dword ptr [0xcb5de8], 0xa5bee0
// 00a3243c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
