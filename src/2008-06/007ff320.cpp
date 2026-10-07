// roc 2008-06 007ff320  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff320
//
// 007ff320  a104a49700           mov eax, dword ptr [0x97a404]
// 007ff325  85c0                 test eax, eax
// 007ff327  7409                 je 0x7ff332
// 007ff329  50                   push eax
// 007ff32a  e84b13eaff           call 0x6a067a
// 007ff32f  83c404               add esp, 4
// 007ff332  c705eca3970030b78000 mov dword ptr [0x97a3ec], 0x80b730
// 007ff33c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
