// roc 2007-08 0049f7e0  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049f7e0
//
// 0049f7e0  56                   push esi
// 0049f7e1  8bf1                 mov esi, ecx
// 0049f7e3  8b4608               mov eax, dword ptr [esi + 8]
// 0049f7e6  8d4801               lea ecx, [eax + 1]
// 0049f7e9  3b0e                 cmp ecx, dword ptr [esi]
// 0049f7eb  7e06                 jle 0x49f7f3
// 0049f7ed  32c0                 xor al, al
// 0049f7ef  5e                   pop esi
// 0049f7f0  c20400               ret 4
// 0049f7f3  8bc8                 mov ecx, eax
// 0049f7f5  83e107               and ecx, 7
// 0049f7f8  ba80000000           mov edx, 0x80
// 0049f7fd  d3fa                 sar edx, cl
// 0049f7ff  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0049f802  c1f803               sar eax, 3
// 0049f805  841408               test byte ptr [eax + ecx], dl
// 0049f808  8b442408             mov eax, dword ptr [esp + 8]
// 0049f80c  0f95c2               setne dl
// 0049f80f  8810                 mov byte ptr [eax], dl
// 0049f811  b801000000           mov eax, 1
// 0049f816  014608               add dword ptr [esi + 8], eax
// 0049f819  5e                   pop esi
// 0049f81a  c20400               ret 4
// library rbxgs-net/Streaming.cpp (function ??$Read@_N@BitStream@RakNet@@QAE_NAA_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
