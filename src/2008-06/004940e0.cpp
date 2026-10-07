// roc 2008-06 004940e0  unit: RBX::Network::Player  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004940e0
//
// 004940e0  8b442404             mov eax, dword ptr [esp + 4]
// 004940e4  50                   push eax
// 004940e5  e836750d00           call 0x56b620
// 004940ea  85c0                 test eax, eax
// 004940ec  7415                 je 0x494103
// 004940ee  d9442408             fld dword ptr [esp + 8]
// 004940f2  51                   push ecx
// 004940f3  8d4c2408             lea ecx, [esp + 8]
// 004940f7  d91c24               fstp dword ptr [esp]
// 004940fa  51                   push ecx
// 004940fb  8d4810               lea ecx, [eax + 0x10]
// 004940fe  e8edf6ffff           call 0x4937f0
// 00494103  c20800               ret 8
// library rbxgs/humanoid\Running.cpp (function ?fire@?$SignalDescImpl@$00$$A6AXM@Z@Reflection@RBX@@QAEXPAVSignalSource@23@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Running.cpp
