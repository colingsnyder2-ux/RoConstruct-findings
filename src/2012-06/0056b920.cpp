// roc 2012-06 0056b920  unit: RBX::RbxRay  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0056b920
//
// 0056b920  807c240800           cmp byte ptr [esp + 8], 0
// 0056b925  56                   push esi
// 0056b926  8b742408             mov esi, dword ptr [esp + 8]
// 0056b92a  8bce                 mov ecx, esi
// 0056b92c  7409                 je 0x56b937
// 0056b92e  e81dc4ffff           call 0x567d50
// 0056b933  8bc6                 mov eax, esi
// 0056b935  5e                   pop esi
// 0056b936  c3                   ret 
// 0056b937  e8f4c3ffff           call 0x567d30
// 0056b93c  8bc6                 mov eax, esi
// 0056b93e  5e                   pop esi
// 0056b93f  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??6Network@RBX@@YAAAVBitStream@RakNet@@AAV23@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
