// roc 2008-06 00800510  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800510
//
// 00800510  a140c99700           mov eax, dword ptr [0x97c940]
// 00800515  85c0                 test eax, eax
// 00800517  7409                 je 0x800522
// 00800519  50                   push eax
// 0080051a  e85b01eaff           call 0x6a067a
// 0080051f  83c404               add esp, 4
// 00800522  c70528c9970030b78000 mov dword ptr [0x97c928], 0x80b730
// 0080052c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
