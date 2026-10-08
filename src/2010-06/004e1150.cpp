// roc 2010-06 004e1150  unit: G3D::Ray  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e1150
//
// 004e1150  8a442408             mov al, byte ptr [esp + 8]
// 004e1154  56                   push esi
// 004e1155  8b742408             mov esi, dword ptr [esp + 8]
// 004e1159  6a01                 push 1
// 004e115b  6a08                 push 8
// 004e115d  8d4c2414             lea ecx, [esp + 0x14]
// 004e1161  51                   push ecx
// 004e1162  8bce                 mov ecx, esi
// 004e1164  88442418             mov byte ptr [esp + 0x18], al
// 004e1168  e8e3c2ffff           call 0x4dd450
// 004e116d  8bc6                 mov eax, esi
// 004e116f  5e                   pop esi
// 004e1170  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??6Network@RBX@@YAAAVBitStream@RakNet@@AAV23@E@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
