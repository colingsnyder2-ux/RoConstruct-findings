// roc 2008-06 00801090  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801090
//
// 00801090  a1a4d59700           mov eax, dword ptr [0x97d5a4]
// 00801095  85c0                 test eax, eax
// 00801097  7409                 je 0x8010a2
// 00801099  50                   push eax
// 0080109a  e8dbf5e9ff           call 0x6a067a
// 0080109f  83c404               add esp, 4
// 008010a2  c7058cd5970030b78000 mov dword ptr [0x97d58c], 0x80b730
// 008010ac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
