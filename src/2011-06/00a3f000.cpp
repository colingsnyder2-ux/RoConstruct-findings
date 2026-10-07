// roc 2011-06 00a3f000  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f000
//
// 00a3f000  a1f447cd00           mov eax, dword ptr [0xcd47f4]
// 00a3f005  85c0                 test eax, eax
// 00a3f007  7409                 je 0xa3f012
// 00a3f009  50                   push eax
// 00a3f00a  e849b0dcff           call 0x80a058
// 00a3f00f  83c404               add esp, 4
// 00a3f012  c705d847cd00e0bea500 mov dword ptr [0xcd47d8], 0xa5bee0
// 00a3f01c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
