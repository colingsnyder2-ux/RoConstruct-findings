// roc 2008-06 007fde50  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fde50
//
// 007fde50  a1e4609700           mov eax, dword ptr [0x9760e4]
// 007fde55  85c0                 test eax, eax
// 007fde57  7409                 je 0x7fde62
// 007fde59  50                   push eax
// 007fde5a  e81b28eaff           call 0x6a067a
// 007fde5f  83c404               add esp, 4
// 007fde62  c705cc60970030b78000 mov dword ptr [0x9760cc], 0x80b730
// 007fde6c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
