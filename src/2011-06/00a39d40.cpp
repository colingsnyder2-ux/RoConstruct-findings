// roc 2011-06 00a39d40  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39d40
//
// 00a39d40  a138c1cc00           mov eax, dword ptr [0xccc138]
// 00a39d45  85c0                 test eax, eax
// 00a39d47  7409                 je 0xa39d52
// 00a39d49  50                   push eax
// 00a39d4a  e80903ddff           call 0x80a058
// 00a39d4f  83c404               add esp, 4
// 00a39d52  c7051cc1cc00e0bea500 mov dword ptr [0xccc11c], 0xa5bee0
// 00a39d5c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
