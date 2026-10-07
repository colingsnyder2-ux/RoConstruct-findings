// roc 2011-06 00a337c0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a337c0
//
// 00a337c0  a1f47bcb00           mov eax, dword ptr [0xcb7bf4]
// 00a337c5  85c0                 test eax, eax
// 00a337c7  7409                 je 0xa337d2
// 00a337c9  50                   push eax
// 00a337ca  e88968ddff           call 0x80a058
// 00a337cf  83c404               add esp, 4
// 00a337d2  c705d87bcb00e0bea500 mov dword ptr [0xcb7bd8], 0xa5bee0
// 00a337dc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
