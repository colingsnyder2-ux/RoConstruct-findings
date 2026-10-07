// roc 2011-06 00a3e070  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e070
//
// 00a3e070  a18430cd00           mov eax, dword ptr [0xcd3084]
// 00a3e075  85c0                 test eax, eax
// 00a3e077  7409                 je 0xa3e082
// 00a3e079  50                   push eax
// 00a3e07a  e8d9bfdcff           call 0x80a058
// 00a3e07f  83c404               add esp, 4
// 00a3e082  c7056830cd00e0bea500 mov dword ptr [0xcd3068], 0xa5bee0
// 00a3e08c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
