// roc 2011-06 00a32e20  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32e20
//
// 00a32e20  a1b869cb00           mov eax, dword ptr [0xcb69b8]
// 00a32e25  85c0                 test eax, eax
// 00a32e27  7409                 je 0xa32e32
// 00a32e29  50                   push eax
// 00a32e2a  e82972ddff           call 0x80a058
// 00a32e2f  83c404               add esp, 4
// 00a32e32  c7059869cb00e0bea500 mov dword ptr [0xcb6998], 0xa5bee0
// 00a32e3c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
