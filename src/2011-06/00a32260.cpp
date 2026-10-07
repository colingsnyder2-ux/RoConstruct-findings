// roc 2011-06 00a32260  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32260
//
// 00a32260  a1bc5acb00           mov eax, dword ptr [0xcb5abc]
// 00a32265  85c0                 test eax, eax
// 00a32267  7409                 je 0xa32272
// 00a32269  50                   push eax
// 00a3226a  e8e97dddff           call 0x80a058
// 00a3226f  83c404               add esp, 4
// 00a32272  c705a05acb00e0bea500 mov dword ptr [0xcb5aa0], 0xa5bee0
// 00a3227c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
