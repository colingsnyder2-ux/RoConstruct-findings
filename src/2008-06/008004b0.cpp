// roc 2008-06 008004b0  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008004b0
//
// 008004b0  a104cb9700           mov eax, dword ptr [0x97cb04]
// 008004b5  85c0                 test eax, eax
// 008004b7  7409                 je 0x8004c2
// 008004b9  50                   push eax
// 008004ba  e8bb01eaff           call 0x6a067a
// 008004bf  83c404               add esp, 4
// 008004c2  c705e8ca970030b78000 mov dword ptr [0x97cae8], 0x80b730
// 008004cc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
