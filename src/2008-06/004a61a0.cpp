// roc 2008-06 004a61a0  unit: RBX::VHint::?$FactoryProduct::Creator  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a61a0
//
// 004a61a0  8b442408             mov eax, dword ptr [esp + 8]
// 004a61a4  56                   push esi
// 004a61a5  8b742408             mov esi, dword ptr [esp + 8]
// 004a61a9  6a01                 push 1
// 004a61ab  6a20                 push 0x20
// 004a61ad  8d4c2414             lea ecx, [esp + 0x14]
// 004a61b1  51                   push ecx
// 004a61b2  8bce                 mov ecx, esi
// 004a61b4  89442418             mov dword ptr [esp + 0x18], eax
// 004a61b8  e843f4ffff           call 0x4a5600
// 004a61bd  8bc6                 mov eax, esi
// 004a61bf  5e                   pop esi
// 004a61c0  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??6Network@RBX@@YAAAVBitStream@RakNet@@AAV23@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
