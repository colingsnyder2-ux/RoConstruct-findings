// roc 2008-06 00800aa0  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800aa0
//
// 00800aa0  a19cd39700           mov eax, dword ptr [0x97d39c]
// 00800aa5  85c0                 test eax, eax
// 00800aa7  7409                 je 0x800ab2
// 00800aa9  50                   push eax
// 00800aaa  e8cbfbe9ff           call 0x6a067a
// 00800aaf  83c404               add esp, 4
// 00800ab2  c70584d3970030b78000 mov dword ptr [0x97d384], 0x80b730
// 00800abc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
