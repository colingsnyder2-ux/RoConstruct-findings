// roc 2008-06 007facb0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007facb0
//
// 007facb0  a144d49600           mov eax, dword ptr [0x96d444]
// 007facb5  85c0                 test eax, eax
// 007facb7  7409                 je 0x7facc2
// 007facb9  50                   push eax
// 007facba  e8bb59eaff           call 0x6a067a
// 007facbf  83c404               add esp, 4
// 007facc2  c7052cd4960030b78000 mov dword ptr [0x96d42c], 0x80b730
// 007faccc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
