// roc 2011-06 00a34e90  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34e90
//
// 00a34e90  a1acbdcb00           mov eax, dword ptr [0xcbbdac]
// 00a34e95  85c0                 test eax, eax
// 00a34e97  7409                 je 0xa34ea2
// 00a34e99  50                   push eax
// 00a34e9a  e8b951ddff           call 0x80a058
// 00a34e9f  83c404               add esp, 4
// 00a34ea2  c70590bdcb00e0bea500 mov dword ptr [0xcbbd90], 0xa5bee0
// 00a34eac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
