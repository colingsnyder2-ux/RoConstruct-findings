// roc 2008-06 007fdb20  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fdb20
//
// 007fdb20  a1485f9700           mov eax, dword ptr [0x975f48]
// 007fdb25  85c0                 test eax, eax
// 007fdb27  7409                 je 0x7fdb32
// 007fdb29  50                   push eax
// 007fdb2a  e84b2beaff           call 0x6a067a
// 007fdb2f  83c404               add esp, 4
// 007fdb32  c705305f970030b78000 mov dword ptr [0x975f30], 0x80b730
// 007fdb3c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
