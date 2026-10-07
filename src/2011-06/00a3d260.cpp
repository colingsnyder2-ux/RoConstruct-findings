// roc 2011-06 00a3d260  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d260
//
// 00a3d260  a1881bcd00           mov eax, dword ptr [0xcd1b88]
// 00a3d265  85c0                 test eax, eax
// 00a3d267  7409                 je 0xa3d272
// 00a3d269  50                   push eax
// 00a3d26a  e8e9cddcff           call 0x80a058
// 00a3d26f  83c404               add esp, 4
// 00a3d272  c7056c1bcd00e0bea500 mov dword ptr [0xcd1b6c], 0xa5bee0
// 00a3d27c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
