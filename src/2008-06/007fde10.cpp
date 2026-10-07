// roc 2008-06 007fde10  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fde10
//
// 007fde10  a124619700           mov eax, dword ptr [0x976124]
// 007fde15  85c0                 test eax, eax
// 007fde17  7409                 je 0x7fde22
// 007fde19  50                   push eax
// 007fde1a  e85b28eaff           call 0x6a067a
// 007fde1f  83c404               add esp, 4
// 007fde22  c7050c61970030b78000 mov dword ptr [0x97610c], 0x80b730
// 007fde2c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
