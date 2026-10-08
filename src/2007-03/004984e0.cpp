// roc 2007-03 004984e0  unit: seg_00490000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004984e0
//
// 004984e0  d9442408             fld dword ptr [esp + 8]
// 004984e4  56                   push esi
// 004984e5  8b742408             mov esi, dword ptr [esp + 8]
// 004984e9  d95c240c             fstp dword ptr [esp + 0xc]
// 004984ed  6a01                 push 1
// 004984ef  6a20                 push 0x20
// 004984f1  8d442414             lea eax, [esp + 0x14]
// 004984f5  50                   push eax
// 004984f6  8bce                 mov ecx, esi
// 004984f8  e8b3f8ffff           call 0x497db0
// 004984fd  8bc6                 mov eax, esi
// 004984ff  5e                   pop esi
// 00498500  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??6Network@RBX@@YAAAVBitStream@RakNet@@AAV23@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
