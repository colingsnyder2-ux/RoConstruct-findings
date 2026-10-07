// roc 2008-06 007fe410  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe410
//
// 007fe410  a130719700           mov eax, dword ptr [0x977130]
// 007fe415  85c0                 test eax, eax
// 007fe417  7409                 je 0x7fe422
// 007fe419  50                   push eax
// 007fe41a  e85b22eaff           call 0x6a067a
// 007fe41f  83c404               add esp, 4
// 007fe422  c7051871970030b78000 mov dword ptr [0x977118], 0x80b730
// 007fe42c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
