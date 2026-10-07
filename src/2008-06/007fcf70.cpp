// roc 2008-06 007fcf70  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fcf70
//
// 007fcf70  a1d8459700           mov eax, dword ptr [0x9745d8]
// 007fcf75  85c0                 test eax, eax
// 007fcf77  7409                 je 0x7fcf82
// 007fcf79  50                   push eax
// 007fcf7a  e8fb36eaff           call 0x6a067a
// 007fcf7f  83c404               add esp, 4
// 007fcf82  c705c045970030b78000 mov dword ptr [0x9745c0], 0x80b730
// 007fcf8c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
