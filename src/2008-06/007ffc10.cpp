// roc 2008-06 007ffc10  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffc10
//
// 007ffc10  a164b39700           mov eax, dword ptr [0x97b364]
// 007ffc15  85c0                 test eax, eax
// 007ffc17  7409                 je 0x7ffc22
// 007ffc19  50                   push eax
// 007ffc1a  e85b0aeaff           call 0x6a067a
// 007ffc1f  83c404               add esp, 4
// 007ffc22  c70548b3970030b78000 mov dword ptr [0x97b348], 0x80b730
// 007ffc2c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
