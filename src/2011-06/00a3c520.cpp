// roc 2011-06 00a3c520  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c520
//
// 00a3c520  a15407cd00           mov eax, dword ptr [0xcd0754]
// 00a3c525  85c0                 test eax, eax
// 00a3c527  7409                 je 0xa3c532
// 00a3c529  50                   push eax
// 00a3c52a  e829dbdcff           call 0x80a058
// 00a3c52f  83c404               add esp, 4
// 00a3c532  c7053807cd00e0bea500 mov dword ptr [0xcd0738], 0xa5bee0
// 00a3c53c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
