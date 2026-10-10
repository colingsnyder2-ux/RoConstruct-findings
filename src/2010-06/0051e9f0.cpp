// from server: 100% by tester
// roc 2007-03 004c06e0  unit: seg_004c0000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c06e0
//
// 004c06e0  33c0                 xor eax, eax
// 004c06e2  f644240401           test byte ptr [esp + 4], 1
// 004c06e7  56                   push esi
// 004c06e8  8bf1                 mov esi, ecx
// 004c06ea  c7065ce57900         mov dword ptr [esi], 0x79e55c
// 004c06f0  c7460401234567       mov dword ptr [esi + 4], 0x67452301
// 004c06f7  c7460889abcdef       mov dword ptr [esi + 8], 0xefcdab89
// 004c06fe  c7460cfedcba98       mov dword ptr [esi + 0xc], 0x98badcfe
// 004c0705  c7461076543210       mov dword ptr [esi + 0x10], 0x10325476
// 004c070c  c74614f0e1d2c3       mov dword ptr [esi + 0x14], 0xc3d2e1f0
// 004c0713  894618               mov dword ptr [esi + 0x18], eax
// 004c0716  89461c               mov dword ptr [esi + 0x1c], eax
// 004c0719  7409                 je 0x4c0724
// 004c071b  56                   push esi
// 004c071c  e8cfd91500           call 0x61e0f0
// 004c0721  83c404               add esp, 4
// 004c0724  8bc6                 mov eax, esi
// 004c0726  5e                   pop esi
// 004c0727  c20400               ret 4
// library rbxgs-raknet/SHA1.cpp (function ??_GCSHA1@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SHA1.cpp
