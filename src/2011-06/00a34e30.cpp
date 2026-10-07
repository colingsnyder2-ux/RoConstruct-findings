// roc 2011-06 00a34e30  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34e30
//
// 00a34e30  a194bbcb00           mov eax, dword ptr [0xcbbb94]
// 00a34e35  85c0                 test eax, eax
// 00a34e37  7409                 je 0xa34e42
// 00a34e39  50                   push eax
// 00a34e3a  e81952ddff           call 0x80a058
// 00a34e3f  83c404               add esp, 4
// 00a34e42  c70574bbcb00e0bea500 mov dword ptr [0xcbbb74], 0xa5bee0
// 00a34e4c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
