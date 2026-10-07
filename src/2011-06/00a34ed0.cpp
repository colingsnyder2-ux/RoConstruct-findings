// roc 2011-06 00a34ed0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34ed0
//
// 00a34ed0  a1a4bccb00           mov eax, dword ptr [0xcbbca4]
// 00a34ed5  85c0                 test eax, eax
// 00a34ed7  7409                 je 0xa34ee2
// 00a34ed9  50                   push eax
// 00a34eda  e87951ddff           call 0x80a058
// 00a34edf  83c404               add esp, 4
// 00a34ee2  c70588bccb00e0bea500 mov dword ptr [0xcbbc88], 0xa5bee0
// 00a34eec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
