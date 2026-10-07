// roc 2008-06 007ffdf0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffdf0
//
// 007ffdf0  a164b49700           mov eax, dword ptr [0x97b464]
// 007ffdf5  85c0                 test eax, eax
// 007ffdf7  7409                 je 0x7ffe02
// 007ffdf9  50                   push eax
// 007ffdfa  e87b08eaff           call 0x6a067a
// 007ffdff  83c404               add esp, 4
// 007ffe02  c70548b4970030b78000 mov dword ptr [0x97b448], 0x80b730
// 007ffe0c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
