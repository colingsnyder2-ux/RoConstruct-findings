// roc 2011-06 00a3e490  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e490
//
// 00a3e490  a1d434cd00           mov eax, dword ptr [0xcd34d4]
// 00a3e495  85c0                 test eax, eax
// 00a3e497  7409                 je 0xa3e4a2
// 00a3e499  50                   push eax
// 00a3e49a  e8b9bbdcff           call 0x80a058
// 00a3e49f  83c404               add esp, 4
// 00a3e4a2  c705b834cd00e0bea500 mov dword ptr [0xcd34b8], 0xa5bee0
// 00a3e4ac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
