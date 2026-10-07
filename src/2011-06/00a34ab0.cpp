// roc 2011-06 00a34ab0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34ab0
//
// 00a34ab0  a104bacb00           mov eax, dword ptr [0xcbba04]
// 00a34ab5  85c0                 test eax, eax
// 00a34ab7  7409                 je 0xa34ac2
// 00a34ab9  50                   push eax
// 00a34aba  e89955ddff           call 0x80a058
// 00a34abf  83c404               add esp, 4
// 00a34ac2  c705e8b9cb00e0bea500 mov dword ptr [0xcbb9e8], 0xa5bee0
// 00a34acc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
