// roc 2011-06 00a34410  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34410
//
// 00a34410  a17cb2cb00           mov eax, dword ptr [0xcbb27c]
// 00a34415  85c0                 test eax, eax
// 00a34417  7409                 je 0xa34422
// 00a34419  50                   push eax
// 00a3441a  e8395cddff           call 0x80a058
// 00a3441f  83c404               add esp, 4
// 00a34422  c70560b2cb00e0bea500 mov dword ptr [0xcbb260], 0xa5bee0
// 00a3442c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
