// roc 2011-06 00a34e50  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34e50
//
// 00a34e50  a1c4bccb00           mov eax, dword ptr [0xcbbcc4]
// 00a34e55  85c0                 test eax, eax
// 00a34e57  7409                 je 0xa34e62
// 00a34e59  50                   push eax
// 00a34e5a  e8f951ddff           call 0x80a058
// 00a34e5f  83c404               add esp, 4
// 00a34e62  c705a8bccb00e0bea500 mov dword ptr [0xcbbca8], 0xa5bee0
// 00a34e6c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
