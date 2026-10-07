// roc 2008-06 008001f0  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008001f0
//
// 008001f0  a198be9700           mov eax, dword ptr [0x97be98]
// 008001f5  85c0                 test eax, eax
// 008001f7  7409                 je 0x800202
// 008001f9  50                   push eax
// 008001fa  e87b04eaff           call 0x6a067a
// 008001ff  83c404               add esp, 4
// 00800202  c70580be970030b78000 mov dword ptr [0x97be80], 0x80b730
// 0080020c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
