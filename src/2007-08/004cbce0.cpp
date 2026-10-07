// roc 2007-08 004cbce0  unit: CSHA1  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cbce0
//
// 004cbce0  33c0                 xor eax, eax
// 004cbce2  f644240401           test byte ptr [esp + 4], 1
// 004cbce7  56                   push esi
// 004cbce8  8bf1                 mov esi, ecx
// 004cbcea  c706ccef7900         mov dword ptr [esi], 0x79efcc
// 004cbcf0  c7460401234567       mov dword ptr [esi + 4], 0x67452301
// 004cbcf7  c7460889abcdef       mov dword ptr [esi + 8], 0xefcdab89
// 004cbcfe  c7460cfedcba98       mov dword ptr [esi + 0xc], 0x98badcfe
// 004cbd05  c7461076543210       mov dword ptr [esi + 0x10], 0x10325476
// 004cbd0c  c74614f0e1d2c3       mov dword ptr [esi + 0x14], 0xc3d2e1f0
// 004cbd13  894618               mov dword ptr [esi + 0x18], eax
// 004cbd16  89461c               mov dword ptr [esi + 0x1c], eax
// 004cbd19  7409                 je 0x4cbd24
// 004cbd1b  56                   push esi
// 004cbd1c  e8413f1600           call 0x62fc62
// 004cbd21  83c404               add esp, 4
// 004cbd24  8bc6                 mov eax, esi
// 004cbd26  5e                   pop esi
// 004cbd27  c20400               ret 4
// library rbx2016-raknet/SHA1.cpp (function ??_GCSHA1@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SHA1.cpp
