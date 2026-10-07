// roc 2011-06 00a3e4b0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e4b0
//
// 00a3e4b0  a17c35cd00           mov eax, dword ptr [0xcd357c]
// 00a3e4b5  85c0                 test eax, eax
// 00a3e4b7  7409                 je 0xa3e4c2
// 00a3e4b9  50                   push eax
// 00a3e4ba  e899bbdcff           call 0x80a058
// 00a3e4bf  83c404               add esp, 4
// 00a3e4c2  c7056035cd00e0bea500 mov dword ptr [0xcd3560], 0xa5bee0
// 00a3e4cc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
