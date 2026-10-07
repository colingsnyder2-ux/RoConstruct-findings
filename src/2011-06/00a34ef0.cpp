// roc 2011-06 00a34ef0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34ef0
//
// 00a34ef0  a1b4bfcb00           mov eax, dword ptr [0xcbbfb4]
// 00a34ef5  85c0                 test eax, eax
// 00a34ef7  7409                 je 0xa34f02
// 00a34ef9  50                   push eax
// 00a34efa  e85951ddff           call 0x80a058
// 00a34eff  83c404               add esp, 4
// 00a34f02  c70598bfcb00e0bea500 mov dword ptr [0xcbbf98], 0xa5bee0
// 00a34f0c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
