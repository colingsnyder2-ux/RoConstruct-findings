// roc 2008-06 007fbeb0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fbeb0
//
// 007fbeb0  a188139700           mov eax, dword ptr [0x971388]
// 007fbeb5  85c0                 test eax, eax
// 007fbeb7  7409                 je 0x7fbec2
// 007fbeb9  50                   push eax
// 007fbeba  e8bb47eaff           call 0x6a067a
// 007fbebf  83c404               add esp, 4
// 007fbec2  c7057013970030b78000 mov dword ptr [0x971370], 0x80b730
// 007fbecc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
