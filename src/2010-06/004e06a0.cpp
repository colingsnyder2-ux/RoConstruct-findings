// roc 2010-06 004e06a0  unit: G3D::Ray  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e06a0
//
// 004e06a0  807c240800           cmp byte ptr [esp + 8], 0
// 004e06a5  56                   push esi
// 004e06a6  8b742408             mov esi, dword ptr [esp + 8]
// 004e06aa  8bce                 mov ecx, esi
// 004e06ac  7409                 je 0x4e06b7
// 004e06ae  e8fdccffff           call 0x4dd3b0
// 004e06b3  8bc6                 mov eax, esi
// 004e06b5  5e                   pop esi
// 004e06b6  c3                   ret 
// 004e06b7  e8d4ccffff           call 0x4dd390
// 004e06bc  8bc6                 mov eax, esi
// 004e06be  5e                   pop esi
// 004e06bf  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??6Network@RBX@@YAAAVBitStream@RakNet@@AAV23@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
