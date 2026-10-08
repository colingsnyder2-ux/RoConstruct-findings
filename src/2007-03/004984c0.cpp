// roc 2007-03 004984c0  unit: seg_00490000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004984c0
//
// 004984c0  8b442408             mov eax, dword ptr [esp + 8]
// 004984c4  56                   push esi
// 004984c5  8b742408             mov esi, dword ptr [esp + 8]
// 004984c9  6a01                 push 1
// 004984cb  6a08                 push 8
// 004984cd  50                   push eax
// 004984ce  8bce                 mov ecx, esi
// 004984d0  e89bf4ffff           call 0x497970
// 004984d5  8bc6                 mov eax, esi
// 004984d7  5e                   pop esi
// 004984d8  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??5Network@RBX@@YAAAVBitStream@RakNet@@AAV23@AAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
