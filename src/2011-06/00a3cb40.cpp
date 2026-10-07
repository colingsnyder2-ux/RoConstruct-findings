// roc 2011-06 00a3cb40  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3cb40
//
// 00a3cb40  a1dc0ecd00           mov eax, dword ptr [0xcd0edc]
// 00a3cb45  85c0                 test eax, eax
// 00a3cb47  7409                 je 0xa3cb52
// 00a3cb49  50                   push eax
// 00a3cb4a  e809d5dcff           call 0x80a058
// 00a3cb4f  83c404               add esp, 4
// 00a3cb52  c705c00ecd00e0bea500 mov dword ptr [0xcd0ec0], 0xa5bee0
// 00a3cb5c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
