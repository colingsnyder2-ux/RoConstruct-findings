// roc 2008-06 00800250  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800250
//
// 00800250  a1f4bd9700           mov eax, dword ptr [0x97bdf4]
// 00800255  85c0                 test eax, eax
// 00800257  7409                 je 0x800262
// 00800259  50                   push eax
// 0080025a  e81b04eaff           call 0x6a067a
// 0080025f  83c404               add esp, 4
// 00800262  c705d8bd970030b78000 mov dword ptr [0x97bdd8], 0x80b730
// 0080026c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
