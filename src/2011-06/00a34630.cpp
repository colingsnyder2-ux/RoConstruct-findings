// roc 2011-06 00a34630  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34630
//
// 00a34630  a150b6cb00           mov eax, dword ptr [0xcbb650]
// 00a34635  85c0                 test eax, eax
// 00a34637  7409                 je 0xa34642
// 00a34639  50                   push eax
// 00a3463a  e8195addff           call 0x80a058
// 00a3463f  83c404               add esp, 4
// 00a34642  c70534b6cb00e0bea500 mov dword ptr [0xcbb634], 0xa5bee0
// 00a3464c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
