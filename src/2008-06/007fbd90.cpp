// roc 2008-06 007fbd90  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fbd90
//
// 007fbd90  a1fc129700           mov eax, dword ptr [0x9712fc]
// 007fbd95  85c0                 test eax, eax
// 007fbd97  7409                 je 0x7fbda2
// 007fbd99  50                   push eax
// 007fbd9a  e8db48eaff           call 0x6a067a
// 007fbd9f  83c404               add esp, 4
// 007fbda2  c705e412970030b78000 mov dword ptr [0x9712e4], 0x80b730
// 007fbdac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
