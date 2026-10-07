// roc 2011-06 00a349b0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a349b0
//
// 00a349b0  a144bacb00           mov eax, dword ptr [0xcbba44]
// 00a349b5  85c0                 test eax, eax
// 00a349b7  7409                 je 0xa349c2
// 00a349b9  50                   push eax
// 00a349ba  e89956ddff           call 0x80a058
// 00a349bf  83c404               add esp, 4
// 00a349c2  c70528bacb00e0bea500 mov dword ptr [0xcbba28], 0xa5bee0
// 00a349cc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
