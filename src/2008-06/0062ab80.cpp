// roc 2008-06 0062ab80  unit: RBX::VExplosion::?$SignalDesc  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062ab80
//
// 0062ab80  6aff                 push -1
// 0062ab82  68d8987d00           push 0x7d98d8
// 0062ab87  64a100000000         mov eax, dword ptr fs:[0]
// 0062ab8d  50                   push eax
// 0062ab8e  64892500000000       mov dword ptr fs:[0], esp
// 0062ab95  51                   push ecx
// 0062ab96  56                   push esi
// 0062ab97  8bf1                 mov esi, ecx
// 0062ab99  89742404             mov dword ptr [esp + 4], esi
// 0062ab9d  e81ef1ffff           call 0x629cc0
// 0062aba2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0062abaa  e87157f9ff           call 0x5c0320
// 0062abaf  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062abb3  89461c               mov dword ptr [esi + 0x1c], eax
// 0062abb6  c706945d8400         mov dword ptr [esi], 0x845d94
// 0062abbc  c74610885d8400       mov dword ptr [esi + 0x10], 0x845d88
// 0062abc3  c74614805d8400       mov dword ptr [esi + 0x14], 0x845d80
// 0062abca  c74620785d8400       mov dword ptr [esi + 0x20], 0x845d78
// 0062abd1  c74624685d8400       mov dword ptr [esi + 0x24], 0x845d68
// 0062abd8  c74644585d8400       mov dword ptr [esi + 0x44], 0x845d58
// 0062abdf  c74664485d8400       mov dword ptr [esi + 0x64], 0x845d48
// 0062abe6  c78684000000385d8400 mov dword ptr [esi + 0x84], 0x845d38
// 0062abf0  c786a4000000285d8400 mov dword ptr [esi + 0xa4], 0x845d28
// 0062abfa  c786c4000000185d8400 mov dword ptr [esi + 0xc4], 0x845d18
// 0062ac04  8bc6                 mov eax, esi
// 0062ac06  5e                   pop esi
// 0062ac07  64890d00000000       mov dword ptr fs:[0], ecx
// 0062ac0e  83c410               add esp, 0x10
// 0062ac11  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
