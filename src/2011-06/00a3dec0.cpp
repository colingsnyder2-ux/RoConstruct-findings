// roc 2011-06 00a3dec0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3dec0
//
// 00a3dec0  a1742bcd00           mov eax, dword ptr [0xcd2b74]
// 00a3dec5  85c0                 test eax, eax
// 00a3dec7  7409                 je 0xa3ded2
// 00a3dec9  50                   push eax
// 00a3deca  e889c1dcff           call 0x80a058
// 00a3decf  83c404               add esp, 4
// 00a3ded2  c705582bcd00e0bea500 mov dword ptr [0xcd2b58], 0xa5bee0
// 00a3dedc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
