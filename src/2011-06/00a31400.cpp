// roc 2011-06 00a31400  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31400
//
// 00a31400  a18835cb00           mov eax, dword ptr [0xcb3588]
// 00a31405  85c0                 test eax, eax
// 00a31407  7409                 je 0xa31412
// 00a31409  50                   push eax
// 00a3140a  e8498cddff           call 0x80a058
// 00a3140f  83c404               add esp, 4
// 00a31412  c7056c35cb00e0bea500 mov dword ptr [0xcb356c], 0xa5bee0
// 00a3141c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
