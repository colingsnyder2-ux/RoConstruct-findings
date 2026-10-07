// roc 2011-06 00a315a0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a315a0
//
// 00a315a0  a1cc34cb00           mov eax, dword ptr [0xcb34cc]
// 00a315a5  85c0                 test eax, eax
// 00a315a7  7409                 je 0xa315b2
// 00a315a9  50                   push eax
// 00a315aa  e8a98addff           call 0x80a058
// 00a315af  83c404               add esp, 4
// 00a315b2  c705b034cb00e0bea500 mov dword ptr [0xcb34b0], 0xa5bee0
// 00a315bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
