// roc 2011-06 00a3c060  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c060
//
// 00a3c060  a1bcfacc00           mov eax, dword ptr [0xccfabc]
// 00a3c065  85c0                 test eax, eax
// 00a3c067  7409                 je 0xa3c072
// 00a3c069  50                   push eax
// 00a3c06a  e8e9dfdcff           call 0x80a058
// 00a3c06f  83c404               add esp, 4
// 00a3c072  c7059cfacc00e0bea500 mov dword ptr [0xccfa9c], 0xa5bee0
// 00a3c07c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
