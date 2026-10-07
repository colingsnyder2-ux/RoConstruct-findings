// roc 2008-06 007fe3f0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe3f0
//
// 007fe3f0  a198709700           mov eax, dword ptr [0x977098]
// 007fe3f5  85c0                 test eax, eax
// 007fe3f7  7409                 je 0x7fe402
// 007fe3f9  50                   push eax
// 007fe3fa  e87b22eaff           call 0x6a067a
// 007fe3ff  83c404               add esp, 4
// 007fe402  c7058070970030b78000 mov dword ptr [0x977080], 0x80b730
// 007fe40c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
