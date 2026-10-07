// roc 2008-06 00800350  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800350
//
// 00800350  a17cbf9700           mov eax, dword ptr [0x97bf7c]
// 00800355  85c0                 test eax, eax
// 00800357  7409                 je 0x800362
// 00800359  50                   push eax
// 0080035a  e81b03eaff           call 0x6a067a
// 0080035f  83c404               add esp, 4
// 00800362  c70564bf970030b78000 mov dword ptr [0x97bf64], 0x80b730
// 0080036c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
