// roc 2008-06 007fbd70  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fbd70
//
// 007fbd70  a1dc139700           mov eax, dword ptr [0x9713dc]
// 007fbd75  85c0                 test eax, eax
// 007fbd77  7409                 je 0x7fbd82
// 007fbd79  50                   push eax
// 007fbd7a  e8fb48eaff           call 0x6a067a
// 007fbd7f  83c404               add esp, 4
// 007fbd82  c705c413970030b78000 mov dword ptr [0x9713c4], 0x80b730
// 007fbd8c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
