// roc 2008-06 004a6350  unit: RBX::VHint::?$FactoryProduct::Creator  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a6350
//
// 004a6350  8a442408             mov al, byte ptr [esp + 8]
// 004a6354  56                   push esi
// 004a6355  8b742408             mov esi, dword ptr [esp + 8]
// 004a6359  6a01                 push 1
// 004a635b  6a08                 push 8
// 004a635d  8d4c2414             lea ecx, [esp + 0x14]
// 004a6361  51                   push ecx
// 004a6362  8bce                 mov ecx, esi
// 004a6364  88442418             mov byte ptr [esp + 0x18], al
// 004a6368  e893f2ffff           call 0x4a5600
// 004a636d  8bc6                 mov eax, esi
// 004a636f  5e                   pop esi
// 004a6370  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??6Network@RBX@@YAAAVBitStream@RakNet@@AAV23@E@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
