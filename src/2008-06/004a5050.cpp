// roc 2008-06 004a5050  unit: RBX::VHint::?$FactoryProduct::Creator  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a5050
//
// 004a5050  56                   push esi
// 004a5051  8bf1                 mov esi, ecx
// 004a5053  8b4608               mov eax, dword ptr [esi + 8]
// 004a5056  8d4801               lea ecx, [eax + 1]
// 004a5059  3b0e                 cmp ecx, dword ptr [esi]
// 004a505b  7e06                 jle 0x4a5063
// 004a505d  32c0                 xor al, al
// 004a505f  5e                   pop esi
// 004a5060  c20400               ret 4
// 004a5063  8bc8                 mov ecx, eax
// 004a5065  83e107               and ecx, 7
// 004a5068  ba80000000           mov edx, 0x80
// 004a506d  d3fa                 sar edx, cl
// 004a506f  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004a5072  c1f803               sar eax, 3
// 004a5075  841408               test byte ptr [eax + ecx], dl
// 004a5078  8b442408             mov eax, dword ptr [esp + 8]
// 004a507c  0f95c2               setne dl
// 004a507f  8810                 mov byte ptr [eax], dl
// 004a5081  b801000000           mov eax, 1
// 004a5086  014608               add dword ptr [esi + 8], eax
// 004a5089  5e                   pop esi
// 004a508a  c20400               ret 4
// library rbxgs-net/Streaming.cpp (function ??$Read@_N@BitStream@RakNet@@QAE_NAA_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
