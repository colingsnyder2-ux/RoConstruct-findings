// roc 2011-06 00a3cc00  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3cc00
//
// 00a3cc00  a16c10cd00           mov eax, dword ptr [0xcd106c]
// 00a3cc05  85c0                 test eax, eax
// 00a3cc07  7409                 je 0xa3cc12
// 00a3cc09  50                   push eax
// 00a3cc0a  e849d4dcff           call 0x80a058
// 00a3cc0f  83c404               add esp, 4
// 00a3cc12  c7054c10cd00e0bea500 mov dword ptr [0xcd104c], 0xa5bee0
// 00a3cc1c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
