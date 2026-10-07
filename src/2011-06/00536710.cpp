// roc 2011-06 00536710  unit: CSHA1  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00536710
//
// 00536710  33c0                 xor eax, eax
// 00536712  f644240401           test byte ptr [esp + 4], 1
// 00536717  56                   push esi
// 00536718  8bf1                 mov esi, ecx
// 0053671a  c7060cf4a700         mov dword ptr [esi], 0xa7f40c
// 00536720  c7460401234567       mov dword ptr [esi + 4], 0x67452301
// 00536727  c7460889abcdef       mov dword ptr [esi + 8], 0xefcdab89
// 0053672e  c7460cfedcba98       mov dword ptr [esi + 0xc], 0x98badcfe
// 00536735  c7461076543210       mov dword ptr [esi + 0x10], 0x10325476
// 0053673c  c74614f0e1d2c3       mov dword ptr [esi + 0x14], 0xc3d2e1f0
// 00536743  894618               mov dword ptr [esi + 0x18], eax
// 00536746  89461c               mov dword ptr [esi + 0x1c], eax
// 00536749  7409                 je 0x536754
// 0053674b  56                   push esi
// 0053674c  e807392d00           call 0x80a058
// 00536751  83c404               add esp, 4
// 00536754  8bc6                 mov eax, esi
// 00536756  5e                   pop esi
// 00536757  c20400               ret 4
// library rbx2016-raknet/SHA1.cpp (function ??_GCSHA1@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SHA1.cpp
