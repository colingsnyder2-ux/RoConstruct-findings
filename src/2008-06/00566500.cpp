// roc 2008-06 00566500  unit: RBX::VTeam::?$FactoryProduct  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00566500
//
// 00566500  6aff                 push -1
// 00566502  6848f47c00           push 0x7cf448
// 00566507  64a100000000         mov eax, dword ptr fs:[0]
// 0056650d  50                   push eax
// 0056650e  64892500000000       mov dword ptr fs:[0], esp
// 00566515  51                   push ecx
// 00566516  56                   push esi
// 00566517  8bf1                 mov esi, ecx
// 00566519  89742404             mov dword ptr [esp + 4], esi
// 0056651d  e89ef9ffff           call 0x565ec0
// 00566522  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056652a  e881fcffff           call 0x5661b0
// 0056652f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00566533  89461c               mov dword ptr [esi + 0x1c], eax
// 00566536  c706e4eb8200         mov dword ptr [esi], 0x82ebe4
// 0056653c  c74610d4eb8200       mov dword ptr [esi + 0x10], 0x82ebd4
// 00566543  c74614cceb8200       mov dword ptr [esi + 0x14], 0x82ebcc
// 0056654a  c74620c4eb8200       mov dword ptr [esi + 0x20], 0x82ebc4
// 00566551  c74624b4eb8200       mov dword ptr [esi + 0x24], 0x82ebb4
// 00566558  c74644a4eb8200       mov dword ptr [esi + 0x44], 0x82eba4
// 0056655f  c7466494eb8200       mov dword ptr [esi + 0x64], 0x82eb94
// 00566566  c7868400000084eb8200 mov dword ptr [esi + 0x84], 0x82eb84
// 00566570  c786a400000074eb8200 mov dword ptr [esi + 0xa4], 0x82eb74
// 0056657a  c786c400000064eb8200 mov dword ptr [esi + 0xc4], 0x82eb64
// 00566584  8bc6                 mov eax, esi
// 00566586  5e                   pop esi
// 00566587  64890d00000000       mov dword ptr fs:[0], ecx
// 0056658e  83c410               add esp, 0x10
// 00566591  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
