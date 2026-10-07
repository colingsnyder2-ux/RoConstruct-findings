// roc 2011-06 00a32e80  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32e80
//
// 00a32e80  a1cc67cb00           mov eax, dword ptr [0xcb67cc]
// 00a32e85  85c0                 test eax, eax
// 00a32e87  7409                 je 0xa32e92
// 00a32e89  50                   push eax
// 00a32e8a  e8c971ddff           call 0x80a058
// 00a32e8f  83c404               add esp, 4
// 00a32e92  c705b067cb00e0bea500 mov dword ptr [0xcb67b0], 0xa5bee0
// 00a32e9c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
