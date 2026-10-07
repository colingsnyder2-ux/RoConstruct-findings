// roc 2011-06 00a34a10  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34a10
//
// 00a34a10  a17cb3cb00           mov eax, dword ptr [0xcbb37c]
// 00a34a15  85c0                 test eax, eax
// 00a34a17  7409                 je 0xa34a22
// 00a34a19  50                   push eax
// 00a34a1a  e83956ddff           call 0x80a058
// 00a34a1f  83c404               add esp, 4
// 00a34a22  c7055cb3cb00e0bea500 mov dword ptr [0xcbb35c], 0xa5bee0
// 00a34a2c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
