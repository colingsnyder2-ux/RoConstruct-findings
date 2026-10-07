// roc 2008-06 008002b0  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008002b0
//
// 008002b0  a134be9700           mov eax, dword ptr [0x97be34]
// 008002b5  85c0                 test eax, eax
// 008002b7  7409                 je 0x8002c2
// 008002b9  50                   push eax
// 008002ba  e8bb03eaff           call 0x6a067a
// 008002bf  83c404               add esp, 4
// 008002c2  c7051cbe970030b78000 mov dword ptr [0x97be1c], 0x80b730
// 008002cc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
