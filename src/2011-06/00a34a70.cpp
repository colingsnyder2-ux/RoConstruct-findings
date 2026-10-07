// roc 2011-06 00a34a70  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34a70
//
// 00a34a70  a124b5cb00           mov eax, dword ptr [0xcbb524]
// 00a34a75  85c0                 test eax, eax
// 00a34a77  7409                 je 0xa34a82
// 00a34a79  50                   push eax
// 00a34a7a  e8d955ddff           call 0x80a058
// 00a34a7f  83c404               add esp, 4
// 00a34a82  c70504b5cb00e0bea500 mov dword ptr [0xcbb504], 0xa5bee0
// 00a34a8c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
