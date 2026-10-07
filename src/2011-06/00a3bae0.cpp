// roc 2011-06 00a3bae0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3bae0
//
// 00a3bae0  a1ccf4cc00           mov eax, dword ptr [0xccf4cc]
// 00a3bae5  85c0                 test eax, eax
// 00a3bae7  7409                 je 0xa3baf2
// 00a3bae9  50                   push eax
// 00a3baea  e869e5dcff           call 0x80a058
// 00a3baef  83c404               add esp, 4
// 00a3baf2  c705b0f4cc00e0bea500 mov dword ptr [0xccf4b0], 0xa5bee0
// 00a3bafc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
