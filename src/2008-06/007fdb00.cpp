// roc 2008-06 007fdb00  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fdb00
//
// 007fdb00  a1805f9700           mov eax, dword ptr [0x975f80]
// 007fdb05  85c0                 test eax, eax
// 007fdb07  7409                 je 0x7fdb12
// 007fdb09  50                   push eax
// 007fdb0a  e86b2beaff           call 0x6a067a
// 007fdb0f  83c404               add esp, 4
// 007fdb12  c705685f970030b78000 mov dword ptr [0x975f68], 0x80b730
// 007fdb1c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
