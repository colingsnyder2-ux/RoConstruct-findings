// roc 2007-08 004a0250  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a0250
//
// 004a0250  8b442404             mov eax, dword ptr [esp + 4]
// 004a0254  56                   push esi
// 004a0255  8b7008               mov esi, dword ptr [eax + 8]
// 004a0258  8d4e01               lea ecx, [esi + 1]
// 004a025b  3b08                 cmp ecx, dword ptr [eax]
// 004a025d  7f22                 jg 0x4a0281
// 004a025f  8bce                 mov ecx, esi
// 004a0261  83e107               and ecx, 7
// 004a0264  ba80000000           mov edx, 0x80
// 004a0269  d3fa                 sar edx, cl
// 004a026b  8b480c               mov ecx, dword ptr [eax + 0xc]
// 004a026e  c1fe03               sar esi, 3
// 004a0271  84140e               test byte ptr [esi + ecx], dl
// 004a0274  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a0278  0f95c2               setne dl
// 004a027b  8811                 mov byte ptr [ecx], dl
// 004a027d  83400801             add dword ptr [eax + 8], 1
// 004a0281  5e                   pop esi
// 004a0282  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??5Network@RBX@@YAAAVBitStream@RakNet@@AAV23@AA_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
