// roc 2008-06 007fff60  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fff60
//
// 007fff60  a154b79700           mov eax, dword ptr [0x97b754]
// 007fff65  85c0                 test eax, eax
// 007fff67  7409                 je 0x7fff72
// 007fff69  50                   push eax
// 007fff6a  e80b07eaff           call 0x6a067a
// 007fff6f  83c404               add esp, 4
// 007fff72  c7053cb7970030b78000 mov dword ptr [0x97b73c], 0x80b730
// 007fff7c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
