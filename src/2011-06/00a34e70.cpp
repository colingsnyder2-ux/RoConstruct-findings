// roc 2011-06 00a34e70  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34e70
//
// 00a34e70  a134bbcb00           mov eax, dword ptr [0xcbbb34]
// 00a34e75  85c0                 test eax, eax
// 00a34e77  7409                 je 0xa34e82
// 00a34e79  50                   push eax
// 00a34e7a  e8d951ddff           call 0x80a058
// 00a34e7f  83c404               add esp, 4
// 00a34e82  c70518bbcb00e0bea500 mov dword ptr [0xcbbb18], 0xa5bee0
// 00a34e8c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
