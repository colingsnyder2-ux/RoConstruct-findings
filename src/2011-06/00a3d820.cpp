// roc 2011-06 00a3d820  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d820
//
// 00a3d820  a1f824cd00           mov eax, dword ptr [0xcd24f8]
// 00a3d825  85c0                 test eax, eax
// 00a3d827  7409                 je 0xa3d832
// 00a3d829  50                   push eax
// 00a3d82a  e829c8dcff           call 0x80a058
// 00a3d82f  83c404               add esp, 4
// 00a3d832  c705dc24cd00e0bea500 mov dword ptr [0xcd24dc], 0xa5bee0
// 00a3d83c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
