// roc 2011-06 00a3d420  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d420
//
// 00a3d420  a1a41dcd00           mov eax, dword ptr [0xcd1da4]
// 00a3d425  85c0                 test eax, eax
// 00a3d427  7409                 je 0xa3d432
// 00a3d429  50                   push eax
// 00a3d42a  e829ccdcff           call 0x80a058
// 00a3d42f  83c404               add esp, 4
// 00a3d432  c705881dcd00e0bea500 mov dword ptr [0xcd1d88], 0xa5bee0
// 00a3d43c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
