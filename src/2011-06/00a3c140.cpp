// roc 2011-06 00a3c140  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c140
//
// 00a3c140  a194fdcc00           mov eax, dword ptr [0xccfd94]
// 00a3c145  85c0                 test eax, eax
// 00a3c147  7409                 je 0xa3c152
// 00a3c149  50                   push eax
// 00a3c14a  e809dfdcff           call 0x80a058
// 00a3c14f  83c404               add esp, 4
// 00a3c152  c70578fdcc00e0bea500 mov dword ptr [0xccfd78], 0xa5bee0
// 00a3c15c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
