// roc 2011-06 00a32380  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32380
//
// 00a32380  a1c063cb00           mov eax, dword ptr [0xcb63c0]
// 00a32385  85c0                 test eax, eax
// 00a32387  7409                 je 0xa32392
// 00a32389  50                   push eax
// 00a3238a  e8c97cddff           call 0x80a058
// 00a3238f  83c404               add esp, 4
// 00a32392  c705a063cb00e0bea500 mov dword ptr [0xcb63a0], 0xa5bee0
// 00a3239c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
