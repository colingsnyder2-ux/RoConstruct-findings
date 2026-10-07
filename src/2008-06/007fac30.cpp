// roc 2008-06 007fac30  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fac30
//
// 007fac30  a198d49600           mov eax, dword ptr [0x96d498]
// 007fac35  85c0                 test eax, eax
// 007fac37  7409                 je 0x7fac42
// 007fac39  50                   push eax
// 007fac3a  e83b5aeaff           call 0x6a067a
// 007fac3f  83c404               add esp, 4
// 007fac42  c70580d4960030b78000 mov dword ptr [0x96d480], 0x80b730
// 007fac4c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
