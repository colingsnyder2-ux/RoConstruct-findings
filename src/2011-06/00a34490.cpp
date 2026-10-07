// roc 2011-06 00a34490  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34490
//
// 00a34490  a184b7cb00           mov eax, dword ptr [0xcbb784]
// 00a34495  85c0                 test eax, eax
// 00a34497  7409                 je 0xa344a2
// 00a34499  50                   push eax
// 00a3449a  e8b95bddff           call 0x80a058
// 00a3449f  83c404               add esp, 4
// 00a344a2  c70568b7cb00e0bea500 mov dword ptr [0xcbb768], 0xa5bee0
// 00a344ac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
