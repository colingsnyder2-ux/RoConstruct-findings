// roc 2008-06 005cb880  unit: RBX::PlayerController  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cb880
//
// 005cb880  6aff                 push -1
// 005cb882  6868537d00           push 0x7d5368
// 005cb887  64a100000000         mov eax, dword ptr fs:[0]
// 005cb88d  50                   push eax
// 005cb88e  64892500000000       mov dword ptr fs:[0], esp
// 005cb895  51                   push ecx
// 005cb896  56                   push esi
// 005cb897  8bf1                 mov esi, ecx
// 005cb899  89742404             mov dword ptr [esp + 4], esi
// 005cb89d  e8fef0ffff           call 0x5ca9a0
// 005cb8a2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005cb8aa  e8814dffff           call 0x5c0630
// 005cb8af  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005cb8b3  89461c               mov dword ptr [esi + 0x1c], eax
// 005cb8b6  c706aca18300         mov dword ptr [esi], 0x83a1ac
// 005cb8bc  c746109ca18300       mov dword ptr [esi + 0x10], 0x83a19c
// 005cb8c3  c7461494a18300       mov dword ptr [esi + 0x14], 0x83a194
// 005cb8ca  c746208ca18300       mov dword ptr [esi + 0x20], 0x83a18c
// 005cb8d1  c746247ca18300       mov dword ptr [esi + 0x24], 0x83a17c
// 005cb8d8  c746446ca18300       mov dword ptr [esi + 0x44], 0x83a16c
// 005cb8df  c746645ca18300       mov dword ptr [esi + 0x64], 0x83a15c
// 005cb8e6  c786840000004ca18300 mov dword ptr [esi + 0x84], 0x83a14c
// 005cb8f0  c786a40000003ca18300 mov dword ptr [esi + 0xa4], 0x83a13c
// 005cb8fa  c786c40000002ca18300 mov dword ptr [esi + 0xc4], 0x83a12c
// 005cb904  8bc6                 mov eax, esi
// 005cb906  5e                   pop esi
// 005cb907  64890d00000000       mov dword ptr fs:[0], ecx
// 005cb90e  83c410               add esp, 0x10
// 005cb911  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
