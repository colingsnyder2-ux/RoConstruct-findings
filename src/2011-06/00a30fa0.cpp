// roc 2011-06 00a30fa0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a30fa0
//
// 00a30fa0  a1e429cb00           mov eax, dword ptr [0xcb29e4]
// 00a30fa5  85c0                 test eax, eax
// 00a30fa7  7409                 je 0xa30fb2
// 00a30fa9  50                   push eax
// 00a30faa  e8a990ddff           call 0x80a058
// 00a30faf  83c404               add esp, 4
// 00a30fb2  c705c829cb00e0bea500 mov dword ptr [0xcb29c8], 0xa5bee0
// 00a30fbc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
