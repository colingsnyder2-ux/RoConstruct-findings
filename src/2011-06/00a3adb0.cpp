// roc 2011-06 00a3adb0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3adb0
//
// 00a3adb0  a110dbcc00           mov eax, dword ptr [0xccdb10]
// 00a3adb5  85c0                 test eax, eax
// 00a3adb7  7409                 je 0xa3adc2
// 00a3adb9  50                   push eax
// 00a3adba  e899f2dcff           call 0x80a058
// 00a3adbf  83c404               add esp, 4
// 00a3adc2  c705f4dacc00e0bea500 mov dword ptr [0xccdaf4], 0xa5bee0
// 00a3adcc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
