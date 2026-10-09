// roc 2008-06 004aa780  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$EnumDesc  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004aa780
//
// 004aa780  6aff                 push -1
// 004aa782  6898807c00           push 0x7c8098
// 004aa787  64a100000000         mov eax, dword ptr fs:[0]
// 004aa78d  50                   push eax
// 004aa78e  64892500000000       mov dword ptr fs:[0], esp
// 004aa795  51                   push ecx
// 004aa796  56                   push esi
// 004aa797  8bf1                 mov esi, ecx
// 004aa799  89742404             mov dword ptr [esp + 4], esi
// 004aa79d  e84ef4ffff           call 0x4a9bf0
// 004aa7a2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004aa7aa  e8d144ffff           call 0x49ec80
// 004aa7af  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004aa7b3  89461c               mov dword ptr [esi + 0x1c], eax
// 004aa7b6  c706e4418200         mov dword ptr [esi], 0x8241e4
// 004aa7bc  c74610d8418200       mov dword ptr [esi + 0x10], 0x8241d8
// 004aa7c3  c74614d0418200       mov dword ptr [esi + 0x14], 0x8241d0
// 004aa7ca  c74620c8418200       mov dword ptr [esi + 0x20], 0x8241c8
// 004aa7d1  c74624b8418200       mov dword ptr [esi + 0x24], 0x8241b8
// 004aa7d8  c74644a8418200       mov dword ptr [esi + 0x44], 0x8241a8
// 004aa7df  c7466498418200       mov dword ptr [esi + 0x64], 0x824198
// 004aa7e6  c7868400000088418200 mov dword ptr [esi + 0x84], 0x824188
// 004aa7f0  c786a400000078418200 mov dword ptr [esi + 0xa4], 0x824178
// 004aa7fa  c786c400000068418200 mov dword ptr [esi + 0xc4], 0x824168
// 004aa804  8bc6                 mov eax, esi
// 004aa806  5e                   pop esi
// 004aa807  64890d00000000       mov dword ptr fs:[0], ecx
// 004aa80e  83c410               add esp, 0x10
// 004aa811  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
