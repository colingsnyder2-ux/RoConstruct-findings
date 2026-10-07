// roc 2011-06 00a31420  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31420
//
// 00a31420  a13435cb00           mov eax, dword ptr [0xcb3534]
// 00a31425  85c0                 test eax, eax
// 00a31427  7409                 je 0xa31432
// 00a31429  50                   push eax
// 00a3142a  e8298cddff           call 0x80a058
// 00a3142f  83c404               add esp, 4
// 00a31432  c7051835cb00e0bea500 mov dword ptr [0xcb3518], 0xa5bee0
// 00a3143c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
