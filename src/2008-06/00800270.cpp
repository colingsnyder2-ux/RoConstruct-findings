// roc 2008-06 00800270  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800270
//
// 00800270  a178be9700           mov eax, dword ptr [0x97be78]
// 00800275  85c0                 test eax, eax
// 00800277  7409                 je 0x800282
// 00800279  50                   push eax
// 0080027a  e8fb03eaff           call 0x6a067a
// 0080027f  83c404               add esp, 4
// 00800282  c7055cbe970030b78000 mov dword ptr [0x97be5c], 0x80b730
// 0080028c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
