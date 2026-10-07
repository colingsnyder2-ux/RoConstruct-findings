// roc 2011-06 00a3a810  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a810
//
// 00a3a810  a1d0cfcc00           mov eax, dword ptr [0xcccfd0]
// 00a3a815  85c0                 test eax, eax
// 00a3a817  7409                 je 0xa3a822
// 00a3a819  50                   push eax
// 00a3a81a  e839f8dcff           call 0x80a058
// 00a3a81f  83c404               add esp, 4
// 00a3a822  c705b4cfcc00e0bea500 mov dword ptr [0xcccfb4], 0xa5bee0
// 00a3a82c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
