// roc 2011-06 00a34ad0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34ad0
//
// 00a34ad0  a1e0b4cb00           mov eax, dword ptr [0xcbb4e0]
// 00a34ad5  85c0                 test eax, eax
// 00a34ad7  7409                 je 0xa34ae2
// 00a34ad9  50                   push eax
// 00a34ada  e87955ddff           call 0x80a058
// 00a34adf  83c404               add esp, 4
// 00a34ae2  c705c4b4cb00e0bea500 mov dword ptr [0xcbb4c4], 0xa5bee0
// 00a34aec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
