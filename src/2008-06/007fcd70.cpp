// roc 2008-06 007fcd70  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fcd70
//
// 007fcd70  a168459700           mov eax, dword ptr [0x974568]
// 007fcd75  85c0                 test eax, eax
// 007fcd77  7409                 je 0x7fcd82
// 007fcd79  50                   push eax
// 007fcd7a  e8fb38eaff           call 0x6a067a
// 007fcd7f  83c404               add esp, 4
// 007fcd82  c7055045970030b78000 mov dword ptr [0x974550], 0x80b730
// 007fcd8c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
