// roc 2008-06 007ffd70  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffd70
//
// 007ffd70  a1a0b39700           mov eax, dword ptr [0x97b3a0]
// 007ffd75  85c0                 test eax, eax
// 007ffd77  7409                 je 0x7ffd82
// 007ffd79  50                   push eax
// 007ffd7a  e8fb08eaff           call 0x6a067a
// 007ffd7f  83c404               add esp, 4
// 007ffd82  c70584b3970030b78000 mov dword ptr [0x97b384], 0x80b730
// 007ffd8c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
