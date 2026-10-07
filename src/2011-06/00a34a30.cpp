// roc 2011-06 00a34a30  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34a30
//
// 00a34a30  a15cb2cb00           mov eax, dword ptr [0xcbb25c]
// 00a34a35  85c0                 test eax, eax
// 00a34a37  7409                 je 0xa34a42
// 00a34a39  50                   push eax
// 00a34a3a  e81956ddff           call 0x80a058
// 00a34a3f  83c404               add esp, 4
// 00a34a42  c70540b2cb00e0bea500 mov dword ptr [0xcbb240], 0xa5bee0
// 00a34a4c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
