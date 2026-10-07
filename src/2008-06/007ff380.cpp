// roc 2008-06 007ff380  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff380
//
// 007ff380  a178a49700           mov eax, dword ptr [0x97a478]
// 007ff385  85c0                 test eax, eax
// 007ff387  7409                 je 0x7ff392
// 007ff389  50                   push eax
// 007ff38a  e8eb12eaff           call 0x6a067a
// 007ff38f  83c404               add esp, 4
// 007ff392  c70560a4970030b78000 mov dword ptr [0x97a460], 0x80b730
// 007ff39c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
