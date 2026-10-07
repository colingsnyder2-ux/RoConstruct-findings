// roc 2011-06 00a3bce0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3bce0
//
// 00a3bce0  a1acf7cc00           mov eax, dword ptr [0xccf7ac]
// 00a3bce5  85c0                 test eax, eax
// 00a3bce7  7409                 je 0xa3bcf2
// 00a3bce9  50                   push eax
// 00a3bcea  e869e3dcff           call 0x80a058
// 00a3bcef  83c404               add esp, 4
// 00a3bcf2  c70590f7cc00e0bea500 mov dword ptr [0xccf790], 0xa5bee0
// 00a3bcfc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
