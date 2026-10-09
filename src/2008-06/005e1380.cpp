// roc 2008-06 005e1380  unit: RBX::VLighting::?$FactoryProduct  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e1380
//
// 005e1380  6aff                 push -1
// 005e1382  6808647d00           push 0x7d6408
// 005e1387  64a100000000         mov eax, dword ptr fs:[0]
// 005e138d  50                   push eax
// 005e138e  64892500000000       mov dword ptr fs:[0], esp
// 005e1395  51                   push ecx
// 005e1396  56                   push esi
// 005e1397  8bf1                 mov esi, ecx
// 005e1399  89742404             mov dword ptr [esp + 4], esi
// 005e139d  e81ee2ffff           call 0x5df5c0
// 005e13a2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e13aa  e851fdffff           call 0x5e1100
// 005e13af  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e13b3  89461c               mov dword ptr [esi + 0x1c], eax
// 005e13b6  c706acdd8300         mov dword ptr [esi], 0x83ddac
// 005e13bc  c74610a0dd8300       mov dword ptr [esi + 0x10], 0x83dda0
// 005e13c3  c7461498dd8300       mov dword ptr [esi + 0x14], 0x83dd98
// 005e13ca  c7462090dd8300       mov dword ptr [esi + 0x20], 0x83dd90
// 005e13d1  c7462480dd8300       mov dword ptr [esi + 0x24], 0x83dd80
// 005e13d8  c7464470dd8300       mov dword ptr [esi + 0x44], 0x83dd70
// 005e13df  c7466460dd8300       mov dword ptr [esi + 0x64], 0x83dd60
// 005e13e6  c7868400000050dd8300 mov dword ptr [esi + 0x84], 0x83dd50
// 005e13f0  c786a400000040dd8300 mov dword ptr [esi + 0xa4], 0x83dd40
// 005e13fa  c786c400000030dd8300 mov dword ptr [esi + 0xc4], 0x83dd30
// 005e1404  8bc6                 mov eax, esi
// 005e1406  5e                   pop esi
// 005e1407  64890d00000000       mov dword ptr fs:[0], ecx
// 005e140e  83c410               add esp, 0x10
// 005e1411  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
