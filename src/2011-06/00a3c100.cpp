// roc 2011-06 00a3c100  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c100
//
// 00a3c100  a174fbcc00           mov eax, dword ptr [0xccfb74]
// 00a3c105  85c0                 test eax, eax
// 00a3c107  7409                 je 0xa3c112
// 00a3c109  50                   push eax
// 00a3c10a  e849dfdcff           call 0x80a058
// 00a3c10f  83c404               add esp, 4
// 00a3c112  c70558fbcc00e0bea500 mov dword ptr [0xccfb58], 0xa5bee0
// 00a3c11c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
