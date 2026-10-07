// roc 2011-06 00a3c080  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c080
//
// 00a3c080  a154fdcc00           mov eax, dword ptr [0xccfd54]
// 00a3c085  85c0                 test eax, eax
// 00a3c087  7409                 je 0xa3c092
// 00a3c089  50                   push eax
// 00a3c08a  e8c9dfdcff           call 0x80a058
// 00a3c08f  83c404               add esp, 4
// 00a3c092  c70538fdcc00e0bea500 mov dword ptr [0xccfd38], 0xa5bee0
// 00a3c09c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
