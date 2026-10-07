// roc 2008-06 007fef10  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fef10
//
// 007fef10  a1649d9700           mov eax, dword ptr [0x979d64]
// 007fef15  85c0                 test eax, eax
// 007fef17  7409                 je 0x7fef22
// 007fef19  50                   push eax
// 007fef1a  e85b17eaff           call 0x6a067a
// 007fef1f  83c404               add esp, 4
// 007fef22  c7054c9d970030b78000 mov dword ptr [0x979d4c], 0x80b730
// 007fef2c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
