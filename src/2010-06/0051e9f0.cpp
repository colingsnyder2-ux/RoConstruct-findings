// roc 2010-06 0051e9f0  unit: CSHA1  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0051e9f0
//
// 0051e9f0  33c0                 xor eax, eax
// 0051e9f2  f644240401           test byte ptr [esp + 4], 1
// 0051e9f7  56                   push esi
// 0051e9f8  8bf1                 mov esi, ecx
// 0051e9fa  c7061ce6a100         mov dword ptr [esi], 0xa1e61c
// 0051ea00  c7460401234567       mov dword ptr [esi + 4], 0x67452301
// 0051ea07  c7460889abcdef       mov dword ptr [esi + 8], 0xefcdab89
// 0051ea0e  c7460cfedcba98       mov dword ptr [esi + 0xc], 0x98badcfe
// 0051ea15  c7461076543210       mov dword ptr [esi + 0x10], 0x10325476
// 0051ea1c  c74614f0e1d2c3       mov dword ptr [esi + 0x14], 0xc3d2e1f0
// 0051ea23  894618               mov dword ptr [esi + 0x18], eax
// 0051ea26  89461c               mov dword ptr [esi + 0x1c], eax
// 0051ea29  7409                 je 0x51ea34
// 0051ea2b  56                   push esi
// 0051ea2c  e8698f2800           call 0x7a799a
// 0051ea31  83c404               add esp, 4
// 0051ea34  8bc6                 mov eax, esi
// 0051ea36  5e                   pop esi
// 0051ea37  c20400               ret 4
// library rbx2016-raknet/SHA1.cpp (function ??_GCSHA1@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SHA1.cpp
