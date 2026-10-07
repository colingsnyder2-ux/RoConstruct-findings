// roc 2008-06 007fb260  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb260
//
// 007fb260  a104fe9600           mov eax, dword ptr [0x96fe04]
// 007fb265  85c0                 test eax, eax
// 007fb267  7409                 je 0x7fb272
// 007fb269  50                   push eax
// 007fb26a  e80b54eaff           call 0x6a067a
// 007fb26f  83c404               add esp, 4
// 007fb272  c705ecfd960030b78000 mov dword ptr [0x96fdec], 0x80b730
// 007fb27c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
