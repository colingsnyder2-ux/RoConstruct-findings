// roc 2011-06 00a31380  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31380
//
// 00a31380  a1a832cb00           mov eax, dword ptr [0xcb32a8]
// 00a31385  85c0                 test eax, eax
// 00a31387  7409                 je 0xa31392
// 00a31389  50                   push eax
// 00a3138a  e8c98cddff           call 0x80a058
// 00a3138f  83c404               add esp, 4
// 00a31392  c7058832cb00e0bea500 mov dword ptr [0xcb3288], 0xa5bee0
// 00a3139c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
