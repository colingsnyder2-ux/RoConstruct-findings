// roc 2011-06 00a3e6c0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e6c0
//
// 00a3e6c0  a13438cd00           mov eax, dword ptr [0xcd3834]
// 00a3e6c5  85c0                 test eax, eax
// 00a3e6c7  7409                 je 0xa3e6d2
// 00a3e6c9  50                   push eax
// 00a3e6ca  e889b9dcff           call 0x80a058
// 00a3e6cf  83c404               add esp, 4
// 00a3e6d2  c7051438cd00e0bea500 mov dword ptr [0xcd3814], 0xa5bee0
// 00a3e6dc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
