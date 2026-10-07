// roc 2008-06 007fce30  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fce30
//
// 007fce30  a188479700           mov eax, dword ptr [0x974788]
// 007fce35  85c0                 test eax, eax
// 007fce37  7409                 je 0x7fce42
// 007fce39  50                   push eax
// 007fce3a  e83b38eaff           call 0x6a067a
// 007fce3f  83c404               add esp, 4
// 007fce42  c7056c47970030b78000 mov dword ptr [0x97476c], 0x80b730
// 007fce4c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
