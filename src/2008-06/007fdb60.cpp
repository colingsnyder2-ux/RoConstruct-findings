// roc 2008-06 007fdb60  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fdb60
//
// 007fdb60  a12c5f9700           mov eax, dword ptr [0x975f2c]
// 007fdb65  85c0                 test eax, eax
// 007fdb67  7409                 je 0x7fdb72
// 007fdb69  50                   push eax
// 007fdb6a  e80b2beaff           call 0x6a067a
// 007fdb6f  83c404               add esp, 4
// 007fdb72  c705145f970030b78000 mov dword ptr [0x975f14], 0x80b730
// 007fdb7c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
