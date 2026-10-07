// roc 2008-06 007facd0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007facd0
//
// 007facd0  a128d49600           mov eax, dword ptr [0x96d428]
// 007facd5  85c0                 test eax, eax
// 007facd7  7409                 je 0x7face2
// 007facd9  50                   push eax
// 007facda  e89b59eaff           call 0x6a067a
// 007facdf  83c404               add esp, 4
// 007face2  c70510d4960030b78000 mov dword ptr [0x96d410], 0x80b730
// 007facec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
