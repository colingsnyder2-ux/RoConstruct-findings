// roc 2008-06 007ff340  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff340
//
// 007ff340  a1d8a59700           mov eax, dword ptr [0x97a5d8]
// 007ff345  85c0                 test eax, eax
// 007ff347  7409                 je 0x7ff352
// 007ff349  50                   push eax
// 007ff34a  e82b13eaff           call 0x6a067a
// 007ff34f  83c404               add esp, 4
// 007ff352  c705c0a5970030b78000 mov dword ptr [0x97a5c0], 0x80b730
// 007ff35c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
