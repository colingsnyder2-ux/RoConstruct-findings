// roc 2008-06 007fbe30  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fbe30
//
// 007fbe30  a17c129700           mov eax, dword ptr [0x97127c]
// 007fbe35  85c0                 test eax, eax
// 007fbe37  7409                 je 0x7fbe42
// 007fbe39  50                   push eax
// 007fbe3a  e83b48eaff           call 0x6a067a
// 007fbe3f  83c404               add esp, 4
// 007fbe42  c7056412970030b78000 mov dword ptr [0x971264], 0x80b730
// 007fbe4c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
