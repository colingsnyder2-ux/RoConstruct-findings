// roc 2011-06 00a3ecf0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ecf0
//
// 00a3ecf0  a13c40cd00           mov eax, dword ptr [0xcd403c]
// 00a3ecf5  85c0                 test eax, eax
// 00a3ecf7  7409                 je 0xa3ed02
// 00a3ecf9  50                   push eax
// 00a3ecfa  e859b3dcff           call 0x80a058
// 00a3ecff  83c404               add esp, 4
// 00a3ed02  c7051c40cd00e0bea500 mov dword ptr [0xcd401c], 0xa5bee0
// 00a3ed0c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
