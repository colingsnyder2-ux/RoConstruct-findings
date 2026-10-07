// roc 2011-06 00a34750  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34750
//
// 00a34750  a188b5cb00           mov eax, dword ptr [0xcbb588]
// 00a34755  85c0                 test eax, eax
// 00a34757  7409                 je 0xa34762
// 00a34759  50                   push eax
// 00a3475a  e8f958ddff           call 0x80a058
// 00a3475f  83c404               add esp, 4
// 00a34762  c7056cb5cb00e0bea500 mov dword ptr [0xcbb56c], 0xa5bee0
// 00a3476c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
