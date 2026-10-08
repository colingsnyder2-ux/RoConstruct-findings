// roc 2007-03 004a54c0  unit: seg_004a0000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004a54c0
//
// 004a54c0  8b442404             mov eax, dword ptr [esp + 4]
// 004a54c4  50                   push eax
// 004a54c5  e856a90c00           call 0x56fe20
// 004a54ca  85c0                 test eax, eax
// 004a54cc  740d                 je 0x4a54db
// 004a54ce  8d4c2404             lea ecx, [esp + 4]
// 004a54d2  51                   push ecx
// 004a54d3  8d4810               lea ecx, [eax + 0x10]
// 004a54d6  e8d5f2ffff           call 0x4a47b0
// 004a54db  c20400               ret 4
// library rbxgs/humanoid\Humanoid.cpp (function ?fire@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@QAEXPAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
