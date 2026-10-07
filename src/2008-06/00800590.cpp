// roc 2008-06 00800590  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800590
//
// 00800590  a168c89700           mov eax, dword ptr [0x97c868]
// 00800595  85c0                 test eax, eax
// 00800597  7409                 je 0x8005a2
// 00800599  50                   push eax
// 0080059a  e8db00eaff           call 0x6a067a
// 0080059f  83c404               add esp, 4
// 008005a2  c70550c8970030b78000 mov dword ptr [0x97c850], 0x80b730
// 008005ac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
