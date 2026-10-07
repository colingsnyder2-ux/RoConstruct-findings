// roc 2008-06 007fbf70  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fbf70
//
// 007fbf70  a118139700           mov eax, dword ptr [0x971318]
// 007fbf75  85c0                 test eax, eax
// 007fbf77  7409                 je 0x7fbf82
// 007fbf79  50                   push eax
// 007fbf7a  e8fb46eaff           call 0x6a067a
// 007fbf7f  83c404               add esp, 4
// 007fbf82  c7050013970030b78000 mov dword ptr [0x971300], 0x80b730
// 007fbf8c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
