// roc 2011-06 00a3c040  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c040
//
// 00a3c040  a11cfccc00           mov eax, dword ptr [0xccfc1c]
// 00a3c045  85c0                 test eax, eax
// 00a3c047  7409                 je 0xa3c052
// 00a3c049  50                   push eax
// 00a3c04a  e809e0dcff           call 0x80a058
// 00a3c04f  83c404               add esp, 4
// 00a3c052  c70500fccc00e0bea500 mov dword ptr [0xccfc00], 0xa5bee0
// 00a3c05c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
