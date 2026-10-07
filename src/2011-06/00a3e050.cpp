// roc 2011-06 00a3e050  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e050
//
// 00a3e050  a1d42fcd00           mov eax, dword ptr [0xcd2fd4]
// 00a3e055  85c0                 test eax, eax
// 00a3e057  7409                 je 0xa3e062
// 00a3e059  50                   push eax
// 00a3e05a  e8f9bfdcff           call 0x80a058
// 00a3e05f  83c404               add esp, 4
// 00a3e062  c705b82fcd00e0bea500 mov dword ptr [0xcd2fb8], 0xa5bee0
// 00a3e06c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
