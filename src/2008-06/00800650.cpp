// roc 2008-06 00800650  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800650
//
// 00800650  a11cc79700           mov eax, dword ptr [0x97c71c]
// 00800655  85c0                 test eax, eax
// 00800657  7409                 je 0x800662
// 00800659  50                   push eax
// 0080065a  e81b00eaff           call 0x6a067a
// 0080065f  83c404               add esp, 4
// 00800662  c70504c7970030b78000 mov dword ptr [0x97c704], 0x80b730
// 0080066c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
