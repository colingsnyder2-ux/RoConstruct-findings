// roc 2011-06 00a3e510  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e510
//
// 00a3e510  a16836cd00           mov eax, dword ptr [0xcd3668]
// 00a3e515  85c0                 test eax, eax
// 00a3e517  7409                 je 0xa3e522
// 00a3e519  50                   push eax
// 00a3e51a  e839bbdcff           call 0x80a058
// 00a3e51f  83c404               add esp, 4
// 00a3e522  c7054c36cd00e0bea500 mov dword ptr [0xcd364c], 0xa5bee0
// 00a3e52c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
