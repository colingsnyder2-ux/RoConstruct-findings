// roc 2008-06 007fdd30  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fdd30
//
// 007fdd30  a1e05f9700           mov eax, dword ptr [0x975fe0]
// 007fdd35  85c0                 test eax, eax
// 007fdd37  7409                 je 0x7fdd42
// 007fdd39  50                   push eax
// 007fdd3a  e83b29eaff           call 0x6a067a
// 007fdd3f  83c404               add esp, 4
// 007fdd42  c705c85f970030b78000 mov dword ptr [0x975fc8], 0x80b730
// 007fdd4c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
