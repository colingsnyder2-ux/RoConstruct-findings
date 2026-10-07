// roc 2011-06 00a3be00  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3be00
//
// 00a3be00  a18cf7cc00           mov eax, dword ptr [0xccf78c]
// 00a3be05  85c0                 test eax, eax
// 00a3be07  7409                 je 0xa3be12
// 00a3be09  50                   push eax
// 00a3be0a  e849e2dcff           call 0x80a058
// 00a3be0f  83c404               add esp, 4
// 00a3be12  c70570f7cc00e0bea500 mov dword ptr [0xccf770], 0xa5bee0
// 00a3be1c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
