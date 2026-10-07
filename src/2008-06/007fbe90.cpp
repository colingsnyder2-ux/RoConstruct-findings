// roc 2008-06 007fbe90  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fbe90
//
// 007fbe90  a144129700           mov eax, dword ptr [0x971244]
// 007fbe95  85c0                 test eax, eax
// 007fbe97  7409                 je 0x7fbea2
// 007fbe99  50                   push eax
// 007fbe9a  e8db47eaff           call 0x6a067a
// 007fbe9f  83c404               add esp, 4
// 007fbea2  c7052c12970030b78000 mov dword ptr [0x97122c], 0x80b730
// 007fbeac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
