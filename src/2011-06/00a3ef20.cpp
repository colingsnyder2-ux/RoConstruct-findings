// roc 2011-06 00a3ef20  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ef20
//
// 00a3ef20  a11c47cd00           mov eax, dword ptr [0xcd471c]
// 00a3ef25  85c0                 test eax, eax
// 00a3ef27  7409                 je 0xa3ef32
// 00a3ef29  50                   push eax
// 00a3ef2a  e829b1dcff           call 0x80a058
// 00a3ef2f  83c404               add esp, 4
// 00a3ef32  c705fc46cd00e0bea500 mov dword ptr [0xcd46fc], 0xa5bee0
// 00a3ef3c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
