// roc 2008-06 00800000  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800000
//
// 00800000  a1f8b79700           mov eax, dword ptr [0x97b7f8]
// 00800005  85c0                 test eax, eax
// 00800007  7409                 je 0x800012
// 00800009  50                   push eax
// 0080000a  e86b06eaff           call 0x6a067a
// 0080000f  83c404               add esp, 4
// 00800012  c705e0b7970030b78000 mov dword ptr [0x97b7e0], 0x80b730
// 0080001c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
