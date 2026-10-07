// roc 2011-06 00a32320  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32320
//
// 00a32320  a1545bcb00           mov eax, dword ptr [0xcb5b54]
// 00a32325  85c0                 test eax, eax
// 00a32327  7409                 je 0xa32332
// 00a32329  50                   push eax
// 00a3232a  e8297dddff           call 0x80a058
// 00a3232f  83c404               add esp, 4
// 00a32332  c705385bcb00e0bea500 mov dword ptr [0xcb5b38], 0xa5bee0
// 00a3233c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
