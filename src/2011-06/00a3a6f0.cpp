// roc 2011-06 00a3a6f0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a6f0
//
// 00a3a6f0  a110cecc00           mov eax, dword ptr [0xccce10]
// 00a3a6f5  85c0                 test eax, eax
// 00a3a6f7  7409                 je 0xa3a702
// 00a3a6f9  50                   push eax
// 00a3a6fa  e859f9dcff           call 0x80a058
// 00a3a6ff  83c404               add esp, 4
// 00a3a702  c705f4cdcc00e0bea500 mov dword ptr [0xcccdf4], 0xa5bee0
// 00a3a70c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
