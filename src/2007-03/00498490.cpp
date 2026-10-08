// roc 2007-03 00498490  unit: seg_00490000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00498490
//
// 00498490  8a442408             mov al, byte ptr [esp + 8]
// 00498494  56                   push esi
// 00498495  8b742408             mov esi, dword ptr [esp + 8]
// 00498499  6a01                 push 1
// 0049849b  6a08                 push 8
// 0049849d  8d4c2414             lea ecx, [esp + 0x14]
// 004984a1  51                   push ecx
// 004984a2  8bce                 mov ecx, esi
// 004984a4  88442418             mov byte ptr [esp + 0x18], al
// 004984a8  e803f9ffff           call 0x497db0
// 004984ad  8bc6                 mov eax, esi
// 004984af  5e                   pop esi
// 004984b0  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??6Network@RBX@@YAAAVBitStream@RakNet@@AAV23@E@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
