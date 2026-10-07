// roc 2011-06 00a34510  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34510
//
// 00a34510  a10cb8cb00           mov eax, dword ptr [0xcbb80c]
// 00a34515  85c0                 test eax, eax
// 00a34517  7409                 je 0xa34522
// 00a34519  50                   push eax
// 00a3451a  e8395bddff           call 0x80a058
// 00a3451f  83c404               add esp, 4
// 00a34522  c705f0b7cb00e0bea500 mov dword ptr [0xcbb7f0], 0xa5bee0
// 00a3452c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
