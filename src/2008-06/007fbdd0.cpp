// roc 2008-06 007fbdd0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fbdd0
//
// 007fbdd0  a114149700           mov eax, dword ptr [0x971414]
// 007fbdd5  85c0                 test eax, eax
// 007fbdd7  7409                 je 0x7fbde2
// 007fbdd9  50                   push eax
// 007fbdda  e89b48eaff           call 0x6a067a
// 007fbddf  83c404               add esp, 4
// 007fbde2  c705fc13970030b78000 mov dword ptr [0x9713fc], 0x80b730
// 007fbdec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
