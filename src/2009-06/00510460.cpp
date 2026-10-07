// roc 2009-06 00510460  unit: CSHA1  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00510460
//
// 00510460  33c0                 xor eax, eax
// 00510462  f644240401           test byte ptr [esp + 4], 1
// 00510467  56                   push esi
// 00510468  8bf1                 mov esi, ecx
// 0051046a  c7067c998c00         mov dword ptr [esi], 0x8c997c
// 00510470  c7460401234567       mov dword ptr [esi + 4], 0x67452301
// 00510477  c7460889abcdef       mov dword ptr [esi + 8], 0xefcdab89
// 0051047e  c7460cfedcba98       mov dword ptr [esi + 0xc], 0x98badcfe
// 00510485  c7461076543210       mov dword ptr [esi + 0x10], 0x10325476
// 0051048c  c74614f0e1d2c3       mov dword ptr [esi + 0x14], 0xc3d2e1f0
// 00510493  894618               mov dword ptr [esi + 0x18], eax
// 00510496  89461c               mov dword ptr [esi + 0x1c], eax
// 00510499  7409                 je 0x5104a4
// 0051049b  56                   push esi
// 0051049c  e891852000           call 0x718a32
// 005104a1  83c404               add esp, 4
// 005104a4  8bc6                 mov eax, esi
// 005104a6  5e                   pop esi
// 005104a7  c20400               ret 4
// library rbx2016-raknet/SHA1.cpp (function ??_GCSHA1@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SHA1.cpp
