// roc 2011-06 00a30310  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a30310
//
// 00a30310  a13422cb00           mov eax, dword ptr [0xcb2234]
// 00a30315  85c0                 test eax, eax
// 00a30317  7409                 je 0xa30322
// 00a30319  50                   push eax
// 00a3031a  e8399dddff           call 0x80a058
// 00a3031f  83c404               add esp, 4
// 00a30322  c7051822cb00e0bea500 mov dword ptr [0xcb2218], 0xa5bee0
// 00a3032c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
