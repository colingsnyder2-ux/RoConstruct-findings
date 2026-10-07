// roc 2011-06 00a34af0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34af0
//
// 00a34af0  a15cb1cb00           mov eax, dword ptr [0xcbb15c]
// 00a34af5  85c0                 test eax, eax
// 00a34af7  7409                 je 0xa34b02
// 00a34af9  50                   push eax
// 00a34afa  e85955ddff           call 0x80a058
// 00a34aff  83c404               add esp, 4
// 00a34b02  c70540b1cb00e0bea500 mov dword ptr [0xcbb140], 0xa5bee0
// 00a34b0c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
