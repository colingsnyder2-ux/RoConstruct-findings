// roc 2011-06 00a3ae60  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ae60
//
// 00a3ae60  a14cdccc00           mov eax, dword ptr [0xccdc4c]
// 00a3ae65  85c0                 test eax, eax
// 00a3ae67  7409                 je 0xa3ae72
// 00a3ae69  50                   push eax
// 00a3ae6a  e8e9f1dcff           call 0x80a058
// 00a3ae6f  83c404               add esp, 4
// 00a3ae72  c70530dccc00e0bea500 mov dword ptr [0xccdc30], 0xa5bee0
// 00a3ae7c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
