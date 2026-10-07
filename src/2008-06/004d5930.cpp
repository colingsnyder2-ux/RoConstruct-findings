// roc 2008-06 004d5930  unit: CSHA1  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d5930
//
// 004d5930  33c0                 xor eax, eax
// 004d5932  f644240401           test byte ptr [esp + 4], 1
// 004d5937  56                   push esi
// 004d5938  8bf1                 mov esi, ecx
// 004d593a  c7061c6b8200         mov dword ptr [esi], 0x826b1c
// 004d5940  c7460401234567       mov dword ptr [esi + 4], 0x67452301
// 004d5947  c7460889abcdef       mov dword ptr [esi + 8], 0xefcdab89
// 004d594e  c7460cfedcba98       mov dword ptr [esi + 0xc], 0x98badcfe
// 004d5955  c7461076543210       mov dword ptr [esi + 0x10], 0x10325476
// 004d595c  c74614f0e1d2c3       mov dword ptr [esi + 0x14], 0xc3d2e1f0
// 004d5963  894618               mov dword ptr [esi + 0x18], eax
// 004d5966  89461c               mov dword ptr [esi + 0x1c], eax
// 004d5969  7409                 je 0x4d5974
// 004d596b  56                   push esi
// 004d596c  e809ad1c00           call 0x6a067a
// 004d5971  83c404               add esp, 4
// 004d5974  8bc6                 mov eax, esi
// 004d5976  5e                   pop esi
// 004d5977  c20400               ret 4
// library rbx2016-raknet/SHA1.cpp (function ??_GCSHA1@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SHA1.cpp
