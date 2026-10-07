// roc 2008-06 007fbe70  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fbe70
//
// 007fbe70  a1dc129700           mov eax, dword ptr [0x9712dc]
// 007fbe75  85c0                 test eax, eax
// 007fbe77  7409                 je 0x7fbe82
// 007fbe79  50                   push eax
// 007fbe7a  e8fb47eaff           call 0x6a067a
// 007fbe7f  83c404               add esp, 4
// 007fbe82  c705c012970030b78000 mov dword ptr [0x9712c0], 0x80b730
// 007fbe8c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
