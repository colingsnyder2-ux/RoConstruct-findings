// roc 2011-06 00a3ee50  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ee50
//
// 00a3ee50  a1cc43cd00           mov eax, dword ptr [0xcd43cc]
// 00a3ee55  85c0                 test eax, eax
// 00a3ee57  7409                 je 0xa3ee62
// 00a3ee59  50                   push eax
// 00a3ee5a  e8f9b1dcff           call 0x80a058
// 00a3ee5f  83c404               add esp, 4
// 00a3ee62  c705ac43cd00e0bea500 mov dword ptr [0xcd43ac], 0xa5bee0
// 00a3ee6c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
