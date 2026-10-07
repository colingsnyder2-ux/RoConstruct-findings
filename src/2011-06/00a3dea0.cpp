// roc 2011-06 00a3dea0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3dea0
//
// 00a3dea0  a1542bcd00           mov eax, dword ptr [0xcd2b54]
// 00a3dea5  85c0                 test eax, eax
// 00a3dea7  7409                 je 0xa3deb2
// 00a3dea9  50                   push eax
// 00a3deaa  e8a9c1dcff           call 0x80a058
// 00a3deaf  83c404               add esp, 4
// 00a3deb2  c705382bcd00e0bea500 mov dword ptr [0xcd2b38], 0xa5bee0
// 00a3debc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
