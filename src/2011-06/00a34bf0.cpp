// roc 2011-06 00a34bf0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34bf0
//
// 00a34bf0  a19cb2cb00           mov eax, dword ptr [0xcbb29c]
// 00a34bf5  85c0                 test eax, eax
// 00a34bf7  7409                 je 0xa34c02
// 00a34bf9  50                   push eax
// 00a34bfa  e85954ddff           call 0x80a058
// 00a34bff  83c404               add esp, 4
// 00a34c02  c70580b2cb00e0bea500 mov dword ptr [0xcbb280], 0xa5bee0
// 00a34c0c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
