// roc 2009-12 00570090  unit: CSHA1  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00570090
//
// 00570090  33c0                 xor eax, eax
// 00570092  f644240401           test byte ptr [esp + 4], 1
// 00570097  56                   push esi
// 00570098  8bf1                 mov esi, ecx
// 0057009a  c7064c069c00         mov dword ptr [esi], 0x9c064c
// 005700a0  c7460401234567       mov dword ptr [esi + 4], 0x67452301
// 005700a7  c7460889abcdef       mov dword ptr [esi + 8], 0xefcdab89
// 005700ae  c7460cfedcba98       mov dword ptr [esi + 0xc], 0x98badcfe
// 005700b5  c7461076543210       mov dword ptr [esi + 0x10], 0x10325476
// 005700bc  c74614f0e1d2c3       mov dword ptr [esi + 0x14], 0xc3d2e1f0
// 005700c3  894618               mov dword ptr [esi + 0x18], eax
// 005700c6  89461c               mov dword ptr [esi + 0x1c], eax
// 005700c9  7409                 je 0x5700d4
// 005700cb  56                   push esi
// 005700cc  e889372800           call 0x7f385a
// 005700d1  83c404               add esp, 4
// 005700d4  8bc6                 mov eax, esi
// 005700d6  5e                   pop esi
// 005700d7  c20400               ret 4
// library rbxgs-raknet/SHA1.cpp (function ??_GCSHA1@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SHA1.cpp
