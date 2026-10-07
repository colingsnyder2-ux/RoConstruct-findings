// roc 2008-06 007ffe70  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffe70
//
// 007ffe70  a19cb29700           mov eax, dword ptr [0x97b29c]
// 007ffe75  85c0                 test eax, eax
// 007ffe77  7409                 je 0x7ffe82
// 007ffe79  50                   push eax
// 007ffe7a  e8fb07eaff           call 0x6a067a
// 007ffe7f  83c404               add esp, 4
// 007ffe82  c70580b2970030b78000 mov dword ptr [0x97b280], 0x80b730
// 007ffe8c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
