// roc 2011-06 00a3a380  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a380
//
// 00a3a380  a15cc8cc00           mov eax, dword ptr [0xccc85c]
// 00a3a385  85c0                 test eax, eax
// 00a3a387  7409                 je 0xa3a392
// 00a3a389  50                   push eax
// 00a3a38a  e8c9fcdcff           call 0x80a058
// 00a3a38f  83c404               add esp, 4
// 00a3a392  c70540c8cc00e0bea500 mov dword ptr [0xccc840], 0xa5bee0
// 00a3a39c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
