// roc 2011-06 00a3cf80  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3cf80
//
// 00a3cf80  a10c17cd00           mov eax, dword ptr [0xcd170c]
// 00a3cf85  85c0                 test eax, eax
// 00a3cf87  7409                 je 0xa3cf92
// 00a3cf89  50                   push eax
// 00a3cf8a  e8c9d0dcff           call 0x80a058
// 00a3cf8f  83c404               add esp, 4
// 00a3cf92  c705f016cd00e0bea500 mov dword ptr [0xcd16f0], 0xa5bee0
// 00a3cf9c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
