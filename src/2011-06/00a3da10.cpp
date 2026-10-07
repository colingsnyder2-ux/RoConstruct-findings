// roc 2011-06 00a3da10  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3da10
//
// 00a3da10  a16c28cd00           mov eax, dword ptr [0xcd286c]
// 00a3da15  85c0                 test eax, eax
// 00a3da17  7409                 je 0xa3da22
// 00a3da19  50                   push eax
// 00a3da1a  e839c6dcff           call 0x80a058
// 00a3da1f  83c404               add esp, 4
// 00a3da22  c7055028cd00e0bea500 mov dword ptr [0xcd2850], 0xa5bee0
// 00a3da2c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
