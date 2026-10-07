// roc 2011-06 00a3e5c0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e5c0
//
// 00a3e5c0  a11437cd00           mov eax, dword ptr [0xcd3714]
// 00a3e5c5  85c0                 test eax, eax
// 00a3e5c7  7409                 je 0xa3e5d2
// 00a3e5c9  50                   push eax
// 00a3e5ca  e889badcff           call 0x80a058
// 00a3e5cf  83c404               add esp, 4
// 00a3e5d2  c705f836cd00e0bea500 mov dword ptr [0xcd36f8], 0xa5bee0
// 00a3e5dc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
