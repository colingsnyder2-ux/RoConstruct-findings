// roc 2011-06 00a3bde0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3bde0
//
// 00a3bde0  a1ccf7cc00           mov eax, dword ptr [0xccf7cc]
// 00a3bde5  85c0                 test eax, eax
// 00a3bde7  7409                 je 0xa3bdf2
// 00a3bde9  50                   push eax
// 00a3bdea  e869e2dcff           call 0x80a058
// 00a3bdef  83c404               add esp, 4
// 00a3bdf2  c705b0f7cc00e0bea500 mov dword ptr [0xccf7b0], 0xa5bee0
// 00a3bdfc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
