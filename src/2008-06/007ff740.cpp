// roc 2008-06 007ff740  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff740
//
// 007ff740  a110aa9700           mov eax, dword ptr [0x97aa10]
// 007ff745  85c0                 test eax, eax
// 007ff747  7409                 je 0x7ff752
// 007ff749  50                   push eax
// 007ff74a  e82b0feaff           call 0x6a067a
// 007ff74f  83c404               add esp, 4
// 007ff752  c705f8a9970030b78000 mov dword ptr [0x97a9f8], 0x80b730
// 007ff75c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
