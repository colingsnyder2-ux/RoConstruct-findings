// roc 2011-06 00a3cfe0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3cfe0
//
// 00a3cfe0  a12c17cd00           mov eax, dword ptr [0xcd172c]
// 00a3cfe5  85c0                 test eax, eax
// 00a3cfe7  7409                 je 0xa3cff2
// 00a3cfe9  50                   push eax
// 00a3cfea  e869d0dcff           call 0x80a058
// 00a3cfef  83c404               add esp, 4
// 00a3cff2  c7051017cd00e0bea500 mov dword ptr [0xcd1710], 0xa5bee0
// 00a3cffc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
