// roc 2011-06 00a3bd40  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3bd40
//
// 00a3bd40  a12cf7cc00           mov eax, dword ptr [0xccf72c]
// 00a3bd45  85c0                 test eax, eax
// 00a3bd47  7409                 je 0xa3bd52
// 00a3bd49  50                   push eax
// 00a3bd4a  e809e3dcff           call 0x80a058
// 00a3bd4f  83c404               add esp, 4
// 00a3bd52  c70510f7cc00e0bea500 mov dword ptr [0xccf710], 0xa5bee0
// 00a3bd5c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
