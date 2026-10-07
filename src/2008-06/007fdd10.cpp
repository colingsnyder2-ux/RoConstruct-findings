// roc 2008-06 007fdd10  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fdd10
//
// 007fdd10  a1d0619700           mov eax, dword ptr [0x9761d0]
// 007fdd15  85c0                 test eax, eax
// 007fdd17  7409                 je 0x7fdd22
// 007fdd19  50                   push eax
// 007fdd1a  e85b29eaff           call 0x6a067a
// 007fdd1f  83c404               add esp, 4
// 007fdd22  c705b861970030b78000 mov dword ptr [0x9761b8], 0x80b730
// 007fdd2c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
