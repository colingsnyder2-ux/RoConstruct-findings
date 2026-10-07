// roc 2008-06 007fab60  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fab60
//
// 007fab60  a118d39600           mov eax, dword ptr [0x96d318]
// 007fab65  85c0                 test eax, eax
// 007fab67  7409                 je 0x7fab72
// 007fab69  50                   push eax
// 007fab6a  e80b5beaff           call 0x6a067a
// 007fab6f  83c404               add esp, 4
// 007fab72  c70500d3960030b78000 mov dword ptr [0x96d300], 0x80b730
// 007fab7c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
