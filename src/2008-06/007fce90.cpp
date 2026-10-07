// roc 2008-06 007fce90  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fce90
//
// 007fce90  a1a8479700           mov eax, dword ptr [0x9747a8]
// 007fce95  85c0                 test eax, eax
// 007fce97  7409                 je 0x7fcea2
// 007fce99  50                   push eax
// 007fce9a  e8db37eaff           call 0x6a067a
// 007fce9f  83c404               add esp, 4
// 007fcea2  c7059047970030b78000 mov dword ptr [0x974790], 0x80b730
// 007fceac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
