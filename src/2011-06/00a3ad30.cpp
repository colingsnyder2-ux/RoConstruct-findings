// roc 2011-06 00a3ad30  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ad30
//
// 00a3ad30  a11cdacc00           mov eax, dword ptr [0xccda1c]
// 00a3ad35  85c0                 test eax, eax
// 00a3ad37  7409                 je 0xa3ad42
// 00a3ad39  50                   push eax
// 00a3ad3a  e819f3dcff           call 0x80a058
// 00a3ad3f  83c404               add esp, 4
// 00a3ad42  c70500dacc00e0bea500 mov dword ptr [0xccda00], 0xa5bee0
// 00a3ad4c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
