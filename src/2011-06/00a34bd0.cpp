// roc 2011-06 00a34bd0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34bd0
//
// 00a34bd0  a114b9cb00           mov eax, dword ptr [0xcbb914]
// 00a34bd5  85c0                 test eax, eax
// 00a34bd7  7409                 je 0xa34be2
// 00a34bd9  50                   push eax
// 00a34bda  e87954ddff           call 0x80a058
// 00a34bdf  83c404               add esp, 4
// 00a34be2  c705f8b8cb00e0bea500 mov dword ptr [0xcbb8f8], 0xa5bee0
// 00a34bec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
