// roc 2007-08 0048ea70  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0048ea70
//
// 0048ea70  8b442404             mov eax, dword ptr [esp + 4]
// 0048ea74  50                   push eax
// 0048ea75  e8f6170e00           call 0x570270
// 0048ea7a  85c0                 test eax, eax
// 0048ea7c  7415                 je 0x48ea93
// 0048ea7e  d9442408             fld dword ptr [esp + 8]
// 0048ea82  51                   push ecx
// 0048ea83  8d4c2408             lea ecx, [esp + 8]
// 0048ea87  d91c24               fstp dword ptr [esp]
// 0048ea8a  51                   push ecx
// 0048ea8b  8d4810               lea ecx, [eax + 0x10]
// 0048ea8e  e8fdedffff           call 0x48d890
// 0048ea93  c20800               ret 8
// library rbxgs/humanoid\Running.cpp (function ?fire@?$SignalDescImpl@$00$$A6AXM@Z@Reflection@RBX@@QAEXPAVSignalSource@23@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Running.cpp
