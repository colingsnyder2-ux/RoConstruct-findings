// roc 2008-06 007fac70  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fac70
//
// 007fac70  a1f0d49600           mov eax, dword ptr [0x96d4f0]
// 007fac75  85c0                 test eax, eax
// 007fac77  7409                 je 0x7fac82
// 007fac79  50                   push eax
// 007fac7a  e8fb59eaff           call 0x6a067a
// 007fac7f  83c404               add esp, 4
// 007fac82  c705d4d4960030b78000 mov dword ptr [0x96d4d4], 0x80b730
// 007fac8c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
