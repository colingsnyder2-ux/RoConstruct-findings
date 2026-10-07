// roc 2011-06 00a3dc80  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3dc80
//
// 00a3dc80  a1142ccd00           mov eax, dword ptr [0xcd2c14]
// 00a3dc85  85c0                 test eax, eax
// 00a3dc87  7409                 je 0xa3dc92
// 00a3dc89  50                   push eax
// 00a3dc8a  e8c9c3dcff           call 0x80a058
// 00a3dc8f  83c404               add esp, 4
// 00a3dc92  c705f82bcd00e0bea500 mov dword ptr [0xcd2bf8], 0xa5bee0
// 00a3dc9c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
