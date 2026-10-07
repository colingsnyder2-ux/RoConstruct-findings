// roc 2011-06 00a3c540  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c540
//
// 00a3c540  a10c02cd00           mov eax, dword ptr [0xcd020c]
// 00a3c545  85c0                 test eax, eax
// 00a3c547  7409                 je 0xa3c552
// 00a3c549  50                   push eax
// 00a3c54a  e809dbdcff           call 0x80a058
// 00a3c54f  83c404               add esp, 4
// 00a3c552  c705f001cd00e0bea500 mov dword ptr [0xcd01f0], 0xa5bee0
// 00a3c55c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
