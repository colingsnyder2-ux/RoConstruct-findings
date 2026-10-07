// roc 2008-06 007ff760  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff760
//
// 007ff760  a134a99700           mov eax, dword ptr [0x97a934]
// 007ff765  85c0                 test eax, eax
// 007ff767  7409                 je 0x7ff772
// 007ff769  50                   push eax
// 007ff76a  e80b0feaff           call 0x6a067a
// 007ff76f  83c404               add esp, 4
// 007ff772  c7051ca9970030b78000 mov dword ptr [0x97a91c], 0x80b730
// 007ff77c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
