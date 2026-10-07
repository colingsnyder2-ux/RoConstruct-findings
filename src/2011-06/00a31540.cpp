// roc 2011-06 00a31540  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31540
//
// 00a31540  a1f432cb00           mov eax, dword ptr [0xcb32f4]
// 00a31545  85c0                 test eax, eax
// 00a31547  7409                 je 0xa31552
// 00a31549  50                   push eax
// 00a3154a  e8098bddff           call 0x80a058
// 00a3154f  83c404               add esp, 4
// 00a31552  c705d832cb00e0bea500 mov dword ptr [0xcb32d8], 0xa5bee0
// 00a3155c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
