// roc 2011-06 00a3d200  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d200
//
// 00a3d200  a1301bcd00           mov eax, dword ptr [0xcd1b30]
// 00a3d205  85c0                 test eax, eax
// 00a3d207  7409                 je 0xa3d212
// 00a3d209  50                   push eax
// 00a3d20a  e849cedcff           call 0x80a058
// 00a3d20f  83c404               add esp, 4
// 00a3d212  c705141bcd00e0bea500 mov dword ptr [0xcd1b14], 0xa5bee0
// 00a3d21c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
