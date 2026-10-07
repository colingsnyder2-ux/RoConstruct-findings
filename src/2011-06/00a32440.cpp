// roc 2011-06 00a32440  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32440
//
// 00a32440  a1d461cb00           mov eax, dword ptr [0xcb61d4]
// 00a32445  85c0                 test eax, eax
// 00a32447  7409                 je 0xa32452
// 00a32449  50                   push eax
// 00a3244a  e8097cddff           call 0x80a058
// 00a3244f  83c404               add esp, 4
// 00a32452  c705b861cb00e0bea500 mov dword ptr [0xcb61b8], 0xa5bee0
// 00a3245c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
