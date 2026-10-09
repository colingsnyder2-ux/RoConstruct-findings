// roc 2008-06 004cd510  unit: RBX::Network::RoundRobinPhysicsSender  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cd510
//
// 004cd510  6aff                 push -1
// 004cd512  68c8d37b00           push 0x7bd3c8
// 004cd517  64a100000000         mov eax, dword ptr fs:[0]
// 004cd51d  50                   push eax
// 004cd51e  64892500000000       mov dword ptr fs:[0], esp
// 004cd525  51                   push ecx
// 004cd526  56                   push esi
// 004cd527  8bf1                 mov esi, ecx
// 004cd529  89742404             mov dword ptr [esp + 4], esi
// 004cd52d  e88ec5ffff           call 0x4c9ac0
// 004cd532  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004cd53a  e8c1fdffff           call 0x4cd300
// 004cd53f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004cd543  89461c               mov dword ptr [esi + 0x1c], eax
// 004cd546  c706c4698200         mov dword ptr [esi], 0x8269c4
// 004cd54c  c74610b4698200       mov dword ptr [esi + 0x10], 0x8269b4
// 004cd553  c74614ac698200       mov dword ptr [esi + 0x14], 0x8269ac
// 004cd55a  c74620a4698200       mov dword ptr [esi + 0x20], 0x8269a4
// 004cd561  c7462494698200       mov dword ptr [esi + 0x24], 0x826994
// 004cd568  c7464484698200       mov dword ptr [esi + 0x44], 0x826984
// 004cd56f  c7466474698200       mov dword ptr [esi + 0x64], 0x826974
// 004cd576  c7868400000064698200 mov dword ptr [esi + 0x84], 0x826964
// 004cd580  c786a400000054698200 mov dword ptr [esi + 0xa4], 0x826954
// 004cd58a  c786c400000044698200 mov dword ptr [esi + 0xc4], 0x826944
// 004cd594  8bc6                 mov eax, esi
// 004cd596  5e                   pop esi
// 004cd597  64890d00000000       mov dword ptr fs:[0], ecx
// 004cd59e  83c410               add esp, 0x10
// 004cd5a1  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
