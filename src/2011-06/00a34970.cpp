// roc 2011-06 00a34970  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34970
//
// 00a34970  a138b9cb00           mov eax, dword ptr [0xcbb938]
// 00a34975  85c0                 test eax, eax
// 00a34977  7409                 je 0xa34982
// 00a34979  50                   push eax
// 00a3497a  e8d956ddff           call 0x80a058
// 00a3497f  83c404               add esp, 4
// 00a34982  c70518b9cb00e0bea500 mov dword ptr [0xcbb918], 0xa5bee0
// 00a3498c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
