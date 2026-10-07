// roc 2011-06 00a34e10  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34e10
//
// 00a34e10  a114bbcb00           mov eax, dword ptr [0xcbbb14]
// 00a34e15  85c0                 test eax, eax
// 00a34e17  7409                 je 0xa34e22
// 00a34e19  50                   push eax
// 00a34e1a  e83952ddff           call 0x80a058
// 00a34e1f  83c404               add esp, 4
// 00a34e22  c705f8bacb00e0bea500 mov dword ptr [0xcbbaf8], 0xa5bee0
// 00a34e2c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
