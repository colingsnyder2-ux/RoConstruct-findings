// roc 2011-06 00a3cb00  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3cb00
//
// 00a3cb00  a1fc0ecd00           mov eax, dword ptr [0xcd0efc]
// 00a3cb05  85c0                 test eax, eax
// 00a3cb07  7409                 je 0xa3cb12
// 00a3cb09  50                   push eax
// 00a3cb0a  e849d5dcff           call 0x80a058
// 00a3cb0f  83c404               add esp, 4
// 00a3cb12  c705e00ecd00e0bea500 mov dword ptr [0xcd0ee0], 0xa5bee0
// 00a3cb1c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
