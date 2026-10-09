// roc 2008-06 0040c8f0  unit: VAuthoringSettings::?$FactoryProduct  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040c8f0
//
// 0040c8f0  6aff                 push -1
// 0040c8f2  6818d37b00           push 0x7bd318
// 0040c8f7  64a100000000         mov eax, dword ptr fs:[0]
// 0040c8fd  50                   push eax
// 0040c8fe  64892500000000       mov dword ptr fs:[0], esp
// 0040c905  51                   push ecx
// 0040c906  56                   push esi
// 0040c907  8bf1                 mov esi, ecx
// 0040c909  89742404             mov dword ptr [esp + 4], esi
// 0040c90d  e89eebffff           call 0x40b4b0
// 0040c912  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040c91a  e8a1edffff           call 0x40b6c0
// 0040c91f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040c923  89461c               mov dword ptr [esi + 0x1c], eax
// 0040c926  c70684c48000         mov dword ptr [esi], 0x80c484
// 0040c92c  c7461078c48000       mov dword ptr [esi + 0x10], 0x80c478
// 0040c933  c7461470c48000       mov dword ptr [esi + 0x14], 0x80c470
// 0040c93a  c7462068c48000       mov dword ptr [esi + 0x20], 0x80c468
// 0040c941  c7462458c48000       mov dword ptr [esi + 0x24], 0x80c458
// 0040c948  c7464448c48000       mov dword ptr [esi + 0x44], 0x80c448
// 0040c94f  c7466438c48000       mov dword ptr [esi + 0x64], 0x80c438
// 0040c956  c7868400000028c48000 mov dword ptr [esi + 0x84], 0x80c428
// 0040c960  c786a400000018c48000 mov dword ptr [esi + 0xa4], 0x80c418
// 0040c96a  c786c400000008c48000 mov dword ptr [esi + 0xc4], 0x80c408
// 0040c974  8bc6                 mov eax, esi
// 0040c976  5e                   pop esi
// 0040c977  64890d00000000       mov dword ptr fs:[0], ecx
// 0040c97e  83c410               add esp, 0x10
// 0040c981  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
