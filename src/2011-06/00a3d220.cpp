// roc 2011-06 00a3d220  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d220
//
// 00a3d220  a1b01bcd00           mov eax, dword ptr [0xcd1bb0]
// 00a3d225  85c0                 test eax, eax
// 00a3d227  7409                 je 0xa3d232
// 00a3d229  50                   push eax
// 00a3d22a  e829cedcff           call 0x80a058
// 00a3d22f  83c404               add esp, 4
// 00a3d232  c705901bcd00e0bea500 mov dword ptr [0xcd1b90], 0xa5bee0
// 00a3d23c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
