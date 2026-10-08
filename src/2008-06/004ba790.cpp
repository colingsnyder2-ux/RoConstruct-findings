// roc 2008-06 004ba790  unit: RBX::Network::IdSerializer  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ba790
//
// 004ba790  83ec08               sub esp, 8
// 004ba793  56                   push esi
// 004ba794  8bf1                 mov esi, ecx
// 004ba796  807e1400             cmp byte ptr [esi + 0x14], 0
// 004ba79a  57                   push edi
// 004ba79b  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004ba79f  7420                 je 0x4ba7c1
// 004ba7a1  8b07                 mov eax, dword ptr [edi]
// 004ba7a3  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004ba7a6  3bc1                 cmp eax, ecx
// 004ba7a8  7517                 jne 0x4ba7c1
// 004ba7aa  8b542418             mov edx, dword ptr [esp + 0x18]
// 004ba7ae  8b460c               mov eax, dword ptr [esi + 0xc]
// 004ba7b1  8b0e                 mov ecx, dword ptr [esi]
// 004ba7b3  8b12                 mov edx, dword ptr [edx]
// 004ba7b5  5f                   pop edi
// 004ba7b6  8954c104             mov dword ptr [ecx + eax*8 + 4], edx
// 004ba7ba  5e                   pop esi
// 004ba7bb  83c408               add esp, 8
// 004ba7be  c20800               ret 8
// 004ba7c1  6840a24b00           push 0x4ba240
// 004ba7c6  8d442418             lea eax, [esp + 0x18]
// 004ba7ca  50                   push eax
// 004ba7cb  57                   push edi
// 004ba7cc  8bce                 mov ecx, esi
// 004ba7ce  e89d520100           call 0x4cfa70
// 004ba7d3  807c241400           cmp byte ptr [esp + 0x14], 0
// 004ba7d8  7420                 je 0x4ba7fa
// 004ba7da  8b16                 mov edx, dword ptr [esi]
// 004ba7dc  89460c               mov dword ptr [esi + 0xc], eax
// 004ba7df  8b0f                 mov ecx, dword ptr [edi]
// 004ba7e1  894e10               mov dword ptr [esi + 0x10], ecx
// 004ba7e4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004ba7e8  c6461401             mov byte ptr [esi + 0x14], 1
// 004ba7ec  8b09                 mov ecx, dword ptr [ecx]
// 004ba7ee  5f                   pop edi
// 004ba7ef  894cc204             mov dword ptr [edx + eax*8 + 4], ecx
// 004ba7f3  5e                   pop esi
// 004ba7f4  83c408               add esp, 8
// 004ba7f7  c20800               ret 8
// 004ba7fa  8b17                 mov edx, dword ptr [edi]
// 004ba7fc  8b442418             mov eax, dword ptr [esp + 0x18]
// 004ba800  8b08                 mov ecx, dword ptr [eax]
// 004ba802  6840a24b00           push 0x4ba240
// 004ba807  8954240c             mov dword ptr [esp + 0xc], edx
// 004ba80b  6a01                 push 1
// 004ba80d  8d542410             lea edx, [esp + 0x10]
// 004ba811  52                   push edx
// 004ba812  894c2418             mov dword ptr [esp + 0x18], ecx
// 004ba816  57                   push edi
// 004ba817  8bce                 mov ecx, esi
// 004ba819  e862fcffff           call 0x4ba480
// 004ba81e  89460c               mov dword ptr [esi + 0xc], eax
// 004ba821  8b07                 mov eax, dword ptr [edi]
// 004ba823  5f                   pop edi
// 004ba824  894610               mov dword ptr [esi + 0x10], eax
// 004ba827  c6461401             mov byte ptr [esi + 0x14], 1
// 004ba82b  5e                   pop esi
// 004ba82c  83c408               add esp, 8
// 004ba82f  c20800               ret 8
// library rbxgs-raknet/StringCompressor.cpp (function ?Set@?$Map@HPAVHuffmanEncodingTree@@$1??$defaultMapKeyComparison@H@DataStructures@@YAHABH0@Z@DataStructures@@QAEXABHABQAVHuffmanEncodingTree@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet StringCompressor.cpp
