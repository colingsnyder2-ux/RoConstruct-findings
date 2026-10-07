// roc 2011-06 00a3c160  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c160
//
// 00a3c160  a194fbcc00           mov eax, dword ptr [0xccfb94]
// 00a3c165  85c0                 test eax, eax
// 00a3c167  7409                 je 0xa3c172
// 00a3c169  50                   push eax
// 00a3c16a  e8e9dedcff           call 0x80a058
// 00a3c16f  83c404               add esp, 4
// 00a3c172  c70578fbcc00e0bea500 mov dword ptr [0xccfb78], 0xa5bee0
// 00a3c17c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
