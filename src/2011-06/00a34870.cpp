// roc 2011-06 00a34870  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34870
//
// 00a34870  a13cb2cb00           mov eax, dword ptr [0xcbb23c]
// 00a34875  85c0                 test eax, eax
// 00a34877  7409                 je 0xa34882
// 00a34879  50                   push eax
// 00a3487a  e8d957ddff           call 0x80a058
// 00a3487f  83c404               add esp, 4
// 00a34882  c70520b2cb00e0bea500 mov dword ptr [0xcbb220], 0xa5bee0
// 00a3488c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
