// roc 2008-06 007fce70  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fce70
//
// 007fce70  a14c479700           mov eax, dword ptr [0x97474c]
// 007fce75  85c0                 test eax, eax
// 007fce77  7409                 je 0x7fce82
// 007fce79  50                   push eax
// 007fce7a  e8fb37eaff           call 0x6a067a
// 007fce7f  83c404               add esp, 4
// 007fce82  c7053447970030b78000 mov dword ptr [0x974734], 0x80b730
// 007fce8c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
