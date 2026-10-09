// roc 2008-06 006296e0  unit: RBX::VClickDetector::?$FactoryProduct  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006296e0
//
// 006296e0  6aff                 push -1
// 006296e2  68c8977d00           push 0x7d97c8
// 006296e7  64a100000000         mov eax, dword ptr fs:[0]
// 006296ed  50                   push eax
// 006296ee  64892500000000       mov dword ptr fs:[0], esp
// 006296f5  51                   push ecx
// 006296f6  56                   push esi
// 006296f7  8bf1                 mov esi, ecx
// 006296f9  89742404             mov dword ptr [esp + 4], esi
// 006296fd  e89efcffff           call 0x6293a0
// 00629702  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0062970a  e8a16bf9ff           call 0x5c02b0
// 0062970f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00629713  89461c               mov dword ptr [esi + 0x1c], eax
// 00629716  c706145a8400         mov dword ptr [esi], 0x845a14
// 0062971c  c74610085a8400       mov dword ptr [esi + 0x10], 0x845a08
// 00629723  c74614005a8400       mov dword ptr [esi + 0x14], 0x845a00
// 0062972a  c74620f8598400       mov dword ptr [esi + 0x20], 0x8459f8
// 00629731  c74624e8598400       mov dword ptr [esi + 0x24], 0x8459e8
// 00629738  c74644d8598400       mov dword ptr [esi + 0x44], 0x8459d8
// 0062973f  c74664c8598400       mov dword ptr [esi + 0x64], 0x8459c8
// 00629746  c78684000000b8598400 mov dword ptr [esi + 0x84], 0x8459b8
// 00629750  c786a4000000a8598400 mov dword ptr [esi + 0xa4], 0x8459a8
// 0062975a  c786c400000098598400 mov dword ptr [esi + 0xc4], 0x845998
// 00629764  8bc6                 mov eax, esi
// 00629766  5e                   pop esi
// 00629767  64890d00000000       mov dword ptr fs:[0], ecx
// 0062976e  83c410               add esp, 0x10
// 00629771  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
