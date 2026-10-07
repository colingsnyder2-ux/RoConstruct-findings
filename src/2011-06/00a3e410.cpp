// roc 2011-06 00a3e410  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e410
//
// 00a3e410  a12835cd00           mov eax, dword ptr [0xcd3528]
// 00a3e415  85c0                 test eax, eax
// 00a3e417  7409                 je 0xa3e422
// 00a3e419  50                   push eax
// 00a3e41a  e839bcdcff           call 0x80a058
// 00a3e41f  83c404               add esp, 4
// 00a3e422  c7050835cd00e0bea500 mov dword ptr [0xcd3508], 0xa5bee0
// 00a3e42c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
