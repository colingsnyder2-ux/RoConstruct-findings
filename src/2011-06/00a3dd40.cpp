// roc 2011-06 00a3dd40  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3dd40
//
// 00a3dd40  a1ac2ecd00           mov eax, dword ptr [0xcd2eac]
// 00a3dd45  85c0                 test eax, eax
// 00a3dd47  7409                 je 0xa3dd52
// 00a3dd49  50                   push eax
// 00a3dd4a  e809c3dcff           call 0x80a058
// 00a3dd4f  83c404               add esp, 4
// 00a3dd52  c705902ecd00e0bea500 mov dword ptr [0xcd2e90], 0xa5bee0
// 00a3dd5c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
