// roc 2008-06 006422b0  unit: RBX::VerbWidget  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006422b0
//
// 006422b0  56                   push esi
// 006422b1  8bf1                 mov esi, ecx
// 006422b3  e81817f3ff           call 0x5739d0
// 006422b8  d905a4638100         fld dword ptr [0x8163a4]
// 006422be  c706a4a68400         mov dword ptr [esi], 0x84a6a4
// 006422c4  c7461094a68400       mov dword ptr [esi + 0x10], 0x84a694
// 006422cb  c746148ca68400       mov dword ptr [esi + 0x14], 0x84a68c
// 006422d2  c7462084a68400       mov dword ptr [esi + 0x20], 0x84a684
// 006422d9  c7462474a68400       mov dword ptr [esi + 0x24], 0x84a674
// 006422e0  c7464464a68400       mov dword ptr [esi + 0x44], 0x84a664
// 006422e7  c7466454a68400       mov dword ptr [esi + 0x64], 0x84a654
// 006422ee  c7868400000044a68400 mov dword ptr [esi + 0x84], 0x84a644
// 006422f8  c786a400000034a68400 mov dword ptr [esi + 0xa4], 0x84a634
// 00642302  c786c400000024a68400 mov dword ptr [esi + 0xc4], 0x84a624
// 0064230c  c786300100001ca68400 mov dword ptr [esi + 0x130], 0x84a61c
// 00642316  c7864401000000000000 mov dword ptr [esi + 0x144], 0
// 00642320  d99e3c010000         fstp dword ptr [esi + 0x13c]
// 00642326  d9055cf88200         fld dword ptr [0x82f85c]
// 0064232c  8bc6                 mov eax, esi
// 0064232e  d99e40010000         fstp dword ptr [esi + 0x140]
// 00642334  5e                   pop esi
// 00642335  c3                   ret 
// library openrbx-client/App\gui\Widget.cpp (function ??0Widget@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/gui/Widget.cpp
