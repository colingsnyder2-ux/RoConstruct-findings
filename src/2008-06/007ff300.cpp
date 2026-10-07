// roc 2008-06 007ff300  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff300
//
// 007ff300  a154a59700           mov eax, dword ptr [0x97a554]
// 007ff305  85c0                 test eax, eax
// 007ff307  7409                 je 0x7ff312
// 007ff309  50                   push eax
// 007ff30a  e86b13eaff           call 0x6a067a
// 007ff30f  83c404               add esp, 4
// 007ff312  c70538a5970030b78000 mov dword ptr [0x97a538], 0x80b730
// 007ff31c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
