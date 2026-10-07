// roc 2011-06 00a3cde0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3cde0
//
// 00a3cde0  a10414cd00           mov eax, dword ptr [0xcd1404]
// 00a3cde5  85c0                 test eax, eax
// 00a3cde7  7409                 je 0xa3cdf2
// 00a3cde9  50                   push eax
// 00a3cdea  e869d2dcff           call 0x80a058
// 00a3cdef  83c404               add esp, 4
// 00a3cdf2  c705e813cd00e0bea500 mov dword ptr [0xcd13e8], 0xa5bee0
// 00a3cdfc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
