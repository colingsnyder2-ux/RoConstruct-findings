// roc 2008-06 007fac90  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fac90
//
// 007fac90  a1d0d49600           mov eax, dword ptr [0x96d4d0]
// 007fac95  85c0                 test eax, eax
// 007fac97  7409                 je 0x7faca2
// 007fac99  50                   push eax
// 007fac9a  e8db59eaff           call 0x6a067a
// 007fac9f  83c404               add esp, 4
// 007faca2  c705b8d4960030b78000 mov dword ptr [0x96d4b8], 0x80b730
// 007facac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
