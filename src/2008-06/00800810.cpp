// roc 2008-06 00800810  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800810
//
// 00800810  a1c8ca9700           mov eax, dword ptr [0x97cac8]
// 00800815  85c0                 test eax, eax
// 00800817  7409                 je 0x800822
// 00800819  50                   push eax
// 0080081a  e85bfee9ff           call 0x6a067a
// 0080081f  83c404               add esp, 4
// 00800822  c705b0ca970030b78000 mov dword ptr [0x97cab0], 0x80b730
// 0080082c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
