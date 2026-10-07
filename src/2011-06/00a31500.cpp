// roc 2011-06 00a31500  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31500
//
// 00a31500  a1ac34cb00           mov eax, dword ptr [0xcb34ac]
// 00a31505  85c0                 test eax, eax
// 00a31507  7409                 je 0xa31512
// 00a31509  50                   push eax
// 00a3150a  e8498bddff           call 0x80a058
// 00a3150f  83c404               add esp, 4
// 00a31512  c7059034cb00e0bea500 mov dword ptr [0xcb3490], 0xa5bee0
// 00a3151c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
