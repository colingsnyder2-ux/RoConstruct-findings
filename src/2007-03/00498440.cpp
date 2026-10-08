// roc 2007-03 00498440  unit: seg_00490000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00498440
//
// 00498440  8b442408             mov eax, dword ptr [esp + 8]
// 00498444  56                   push esi
// 00498445  8b742408             mov esi, dword ptr [esp + 8]
// 00498449  6a01                 push 1
// 0049844b  6a20                 push 0x20
// 0049844d  8d4c2414             lea ecx, [esp + 0x14]
// 00498451  51                   push ecx
// 00498452  8bce                 mov ecx, esi
// 00498454  89442418             mov dword ptr [esp + 0x18], eax
// 00498458  e853f9ffff           call 0x497db0
// 0049845d  8bc6                 mov eax, esi
// 0049845f  5e                   pop esi
// 00498460  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??6Network@RBX@@YAAAVBitStream@RakNet@@AAV23@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
