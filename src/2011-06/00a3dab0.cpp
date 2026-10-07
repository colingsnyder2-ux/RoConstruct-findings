// roc 2011-06 00a3dab0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3dab0
//
// 00a3dab0  a15829cd00           mov eax, dword ptr [0xcd2958]
// 00a3dab5  85c0                 test eax, eax
// 00a3dab7  7409                 je 0xa3dac2
// 00a3dab9  50                   push eax
// 00a3daba  e899c5dcff           call 0x80a058
// 00a3dabf  83c404               add esp, 4
// 00a3dac2  c7053c29cd00e0bea500 mov dword ptr [0xcd293c], 0xa5bee0
// 00a3dacc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
