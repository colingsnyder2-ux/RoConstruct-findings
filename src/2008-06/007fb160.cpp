// roc 2008-06 007fb160  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb160
//
// 007fb160  a1c4fe9600           mov eax, dword ptr [0x96fec4]
// 007fb165  85c0                 test eax, eax
// 007fb167  7409                 je 0x7fb172
// 007fb169  50                   push eax
// 007fb16a  e80b55eaff           call 0x6a067a
// 007fb16f  83c404               add esp, 4
// 007fb172  c705acfe960030b78000 mov dword ptr [0x96feac], 0x80b730
// 007fb17c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
