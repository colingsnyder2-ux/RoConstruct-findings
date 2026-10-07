// roc 2008-06 007ffc70  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffc70
//
// 007ffc70  a128b39700           mov eax, dword ptr [0x97b328]
// 007ffc75  85c0                 test eax, eax
// 007ffc77  7409                 je 0x7ffc82
// 007ffc79  50                   push eax
// 007ffc7a  e8fb09eaff           call 0x6a067a
// 007ffc7f  83c404               add esp, 4
// 007ffc82  c7050cb3970030b78000 mov dword ptr [0x97b30c], 0x80b730
// 007ffc8c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
