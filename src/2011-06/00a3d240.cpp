// roc 2011-06 00a3d240  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d240
//
// 00a3d240  a1641bcd00           mov eax, dword ptr [0xcd1b64]
// 00a3d245  85c0                 test eax, eax
// 00a3d247  7409                 je 0xa3d252
// 00a3d249  50                   push eax
// 00a3d24a  e809cedcff           call 0x80a058
// 00a3d24f  83c404               add esp, 4
// 00a3d252  c705441bcd00e0bea500 mov dword ptr [0xcd1b44], 0xa5bee0
// 00a3d25c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
