// roc 2011-06 00511500  unit: RBX::Network::ClientReplicator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00511500
//
// 00511500  56                   push esi
// 00511501  8bf1                 mov esi, ecx
// 00511503  8b4604               mov eax, dword ptr [esi + 4]
// 00511506  3b4608               cmp eax, dword ptr [esi + 8]
// 00511509  8b0e                 mov ecx, dword ptr [esi]
// 0051150b  7d16                 jge 0x511523
// 0051150d  8d0481               lea eax, [ecx + eax*4]
// 00511510  85c0                 test eax, eax
// 00511512  7408                 je 0x51151c
// 00511514  8b542408             mov edx, dword ptr [esp + 8]
// 00511518  8b0a                 mov ecx, dword ptr [edx]
// 0051151a  8908                 mov dword ptr [eax], ecx
// 0051151c  ff4604               inc dword ptr [esi + 4]
// 0051151f  5e                   pop esi
// 00511520  c20400               ret 4
// 00511523  57                   push edi
// 00511524  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00511528  3bf9                 cmp edi, ecx
// 0051152a  721e                 jb 0x51154a
// 0051152c  8d1481               lea edx, [ecx + eax*4]
// 0051152f  3bfa                 cmp edi, edx
// 00511531  7317                 jae 0x51154a
// 00511533  8b07                 mov eax, dword ptr [edi]
// 00511535  8d4c240c             lea ecx, [esp + 0xc]
// 00511539  51                   push ecx
// 0051153a  8bce                 mov ecx, esi
// 0051153c  89442410             mov dword ptr [esp + 0x10], eax
// 00511540  e8bbffffff           call 0x511500
// 00511545  5f                   pop edi
// 00511546  5e                   pop esi
// 00511547  c20400               ret 4
// 0051154a  6a00                 push 0
// 0051154c  40                   inc eax
// 0051154d  50                   push eax
// 0051154e  8bce                 mov ecx, esi
// 00511550  e8dbb62300           call 0x74cc30
// 00511555  8b0f                 mov ecx, dword ptr [edi]
// 00511557  8b5604               mov edx, dword ptr [esi + 4]
// 0051155a  8b06                 mov eax, dword ptr [esi]
// 0051155c  5f                   pop edi
// 0051155d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 00511561  5e                   pop esi
// 00511562  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
