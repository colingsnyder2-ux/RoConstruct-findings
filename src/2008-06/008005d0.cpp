// roc 2008-06 008005d0  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008005d0
//
// 008005d0  a190c69700           mov eax, dword ptr [0x97c690]
// 008005d5  85c0                 test eax, eax
// 008005d7  7409                 je 0x8005e2
// 008005d9  50                   push eax
// 008005da  e89b00eaff           call 0x6a067a
// 008005df  83c404               add esp, 4
// 008005e2  c70578c6970030b78000 mov dword ptr [0x97c678], 0x80b730
// 008005ec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
