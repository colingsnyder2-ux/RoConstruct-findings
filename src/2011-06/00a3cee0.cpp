// roc 2011-06 00a3cee0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3cee0
//
// 00a3cee0  a1f817cd00           mov eax, dword ptr [0xcd17f8]
// 00a3cee5  85c0                 test eax, eax
// 00a3cee7  7409                 je 0xa3cef2
// 00a3cee9  50                   push eax
// 00a3ceea  e869d1dcff           call 0x80a058
// 00a3ceef  83c404               add esp, 4
// 00a3cef2  c705dc17cd00e0bea500 mov dword ptr [0xcd17dc], 0xa5bee0
// 00a3cefc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
