// roc 2008-06 007feed0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007feed0
//
// 007feed0  a1109d9700           mov eax, dword ptr [0x979d10]
// 007feed5  85c0                 test eax, eax
// 007feed7  7409                 je 0x7feee2
// 007feed9  50                   push eax
// 007feeda  e89b17eaff           call 0x6a067a
// 007feedf  83c404               add esp, 4
// 007feee2  c705f49c970030b78000 mov dword ptr [0x979cf4], 0x80b730
// 007feeec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
