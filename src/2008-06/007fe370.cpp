// roc 2008-06 007fe370  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe370
//
// 007fe370  a144709700           mov eax, dword ptr [0x977044]
// 007fe375  85c0                 test eax, eax
// 007fe377  7409                 je 0x7fe382
// 007fe379  50                   push eax
// 007fe37a  e8fb22eaff           call 0x6a067a
// 007fe37f  83c404               add esp, 4
// 007fe382  c7052c70970030b78000 mov dword ptr [0x97702c], 0x80b730
// 007fe38c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
