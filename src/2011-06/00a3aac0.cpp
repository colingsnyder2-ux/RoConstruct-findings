// roc 2011-06 00a3aac0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3aac0
//
// 00a3aac0  a1e0d2cc00           mov eax, dword ptr [0xccd2e0]
// 00a3aac5  85c0                 test eax, eax
// 00a3aac7  7409                 je 0xa3aad2
// 00a3aac9  50                   push eax
// 00a3aaca  e889f5dcff           call 0x80a058
// 00a3aacf  83c404               add esp, 4
// 00a3aad2  c705c4d2cc00e0bea500 mov dword ptr [0xccd2c4], 0xa5bee0
// 00a3aadc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
