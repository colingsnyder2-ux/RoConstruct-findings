// roc 2008-06 007fddf0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fddf0
//
// 007fddf0  a1e8629700           mov eax, dword ptr [0x9762e8]
// 007fddf5  85c0                 test eax, eax
// 007fddf7  7409                 je 0x7fde02
// 007fddf9  50                   push eax
// 007fddfa  e87b28eaff           call 0x6a067a
// 007fddff  83c404               add esp, 4
// 007fde02  c705d062970030b78000 mov dword ptr [0x9762d0], 0x80b730
// 007fde0c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
