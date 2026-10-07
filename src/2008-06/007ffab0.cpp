// roc 2008-06 007ffab0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffab0
//
// 007ffab0  a1fcad9700           mov eax, dword ptr [0x97adfc]
// 007ffab5  85c0                 test eax, eax
// 007ffab7  7409                 je 0x7ffac2
// 007ffab9  50                   push eax
// 007ffaba  e8bb0beaff           call 0x6a067a
// 007ffabf  83c404               add esp, 4
// 007ffac2  c705e4ad970030b78000 mov dword ptr [0x97ade4], 0x80b730
// 007ffacc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
