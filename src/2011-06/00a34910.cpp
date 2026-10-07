// roc 2011-06 00a34910  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34910
//
// 00a34910  a1a0b4cb00           mov eax, dword ptr [0xcbb4a0]
// 00a34915  85c0                 test eax, eax
// 00a34917  7409                 je 0xa34922
// 00a34919  50                   push eax
// 00a3491a  e83957ddff           call 0x80a058
// 00a3491f  83c404               add esp, 4
// 00a34922  c70584b4cb00e0bea500 mov dword ptr [0xcbb484], 0xa5bee0
// 00a3492c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
