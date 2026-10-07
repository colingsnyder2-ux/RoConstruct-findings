// roc 2008-06 007fbf30  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fbf30
//
// 007fbf30  a1c0139700           mov eax, dword ptr [0x9713c0]
// 007fbf35  85c0                 test eax, eax
// 007fbf37  7409                 je 0x7fbf42
// 007fbf39  50                   push eax
// 007fbf3a  e83b47eaff           call 0x6a067a
// 007fbf3f  83c404               add esp, 4
// 007fbf42  c705a813970030b78000 mov dword ptr [0x9713a8], 0x80b730
// 007fbf4c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
