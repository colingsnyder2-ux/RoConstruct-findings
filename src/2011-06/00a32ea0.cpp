// roc 2011-06 00a32ea0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32ea0
//
// 00a32ea0  a1746ccb00           mov eax, dword ptr [0xcb6c74]
// 00a32ea5  85c0                 test eax, eax
// 00a32ea7  7409                 je 0xa32eb2
// 00a32ea9  50                   push eax
// 00a32eaa  e8a971ddff           call 0x80a058
// 00a32eaf  83c404               add esp, 4
// 00a32eb2  c705586ccb00e0bea500 mov dword ptr [0xcb6c58], 0xa5bee0
// 00a32ebc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
