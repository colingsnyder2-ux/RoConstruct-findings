// roc 2008-06 004ba3b0  unit: RBX::Network::IdSerializer  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ba3b0
//
// 004ba3b0  56                   push esi
// 004ba3b1  8bf1                 mov esi, ecx
// 004ba3b3  807e1400             cmp byte ptr [esi + 0x14], 0
// 004ba3b7  57                   push edi
// 004ba3b8  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004ba3bc  7417                 je 0x4ba3d5
// 004ba3be  8b07                 mov eax, dword ptr [edi]
// 004ba3c0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004ba3c3  3bc1                 cmp eax, ecx
// 004ba3c5  750e                 jne 0x4ba3d5
// 004ba3c7  8b460c               mov eax, dword ptr [esi + 0xc]
// 004ba3ca  8b0e                 mov ecx, dword ptr [esi]
// 004ba3cc  5f                   pop edi
// 004ba3cd  8d44c104             lea eax, [ecx + eax*8 + 4]
// 004ba3d1  5e                   pop esi
// 004ba3d2  c20400               ret 4
// 004ba3d5  6840a24b00           push 0x4ba240
// 004ba3da  8d542410             lea edx, [esp + 0x10]
// 004ba3de  52                   push edx
// 004ba3df  57                   push edi
// 004ba3e0  8bce                 mov ecx, esi
// 004ba3e2  e889560100           call 0x4cfa70
// 004ba3e7  8b16                 mov edx, dword ptr [esi]
// 004ba3e9  89460c               mov dword ptr [esi + 0xc], eax
// 004ba3ec  8b0f                 mov ecx, dword ptr [edi]
// 004ba3ee  5f                   pop edi
// 004ba3ef  894e10               mov dword ptr [esi + 0x10], ecx
// 004ba3f2  c6461401             mov byte ptr [esi + 0x14], 1
// 004ba3f6  8d44c204             lea eax, [edx + eax*8 + 4]
// 004ba3fa  5e                   pop esi
// 004ba3fb  c20400               ret 4
// library rbxgs-raknet/StringCompressor.cpp (function ?Get@?$Map@HPAVHuffmanEncodingTree@@$1??$defaultMapKeyComparison@H@DataStructures@@YAHABH0@Z@DataStructures@@QAEAAPAVHuffmanEncodingTree@@ABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet StringCompressor.cpp
