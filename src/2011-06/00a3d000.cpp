// roc 2011-06 00a3d000  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d000
//
// 00a3d000  a18c17cd00           mov eax, dword ptr [0xcd178c]
// 00a3d005  85c0                 test eax, eax
// 00a3d007  7409                 je 0xa3d012
// 00a3d009  50                   push eax
// 00a3d00a  e849d0dcff           call 0x80a058
// 00a3d00f  83c404               add esp, 4
// 00a3d012  c7057017cd00e0bea500 mov dword ptr [0xcd1770], 0xa5bee0
// 00a3d01c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
