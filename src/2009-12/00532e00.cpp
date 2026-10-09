// roc 2009-12 00532e00  unit: G3D::Ray  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00532e00
//
// 00532e00  8a442408             mov al, byte ptr [esp + 8]
// 00532e04  56                   push esi
// 00532e05  8b742408             mov esi, dword ptr [esp + 8]
// 00532e09  6a01                 push 1
// 00532e0b  6a08                 push 8
// 00532e0d  8d4c2414             lea ecx, [esp + 0x14]
// 00532e11  51                   push ecx
// 00532e12  8bce                 mov ecx, esi
// 00532e14  88442418             mov byte ptr [esp + 0x18], al
// 00532e18  e823c2ffff           call 0x52f040
// 00532e1d  8bc6                 mov eax, esi
// 00532e1f  5e                   pop esi
// 00532e20  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??6Network@RBX@@YAAAVBitStream@RakNet@@AAV23@E@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
