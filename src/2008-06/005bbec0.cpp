// roc 2008-06 005bbec0  unit: RBX::Soundscape::SoundService  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bbec0
//
// 005bbec0  6aff                 push -1
// 005bbec2  68a83c7d00           push 0x7d3ca8
// 005bbec7  64a100000000         mov eax, dword ptr fs:[0]
// 005bbecd  50                   push eax
// 005bbece  64892500000000       mov dword ptr fs:[0], esp
// 005bbed5  51                   push ecx
// 005bbed6  56                   push esi
// 005bbed7  8bf1                 mov esi, ecx
// 005bbed9  89742404             mov dword ptr [esp + 4], esi
// 005bbedd  e87eacffff           call 0x5b6b60
// 005bbee2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005bbeea  e801f9ffff           call 0x5bb7f0
// 005bbeef  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005bbef3  89461c               mov dword ptr [esi + 0x1c], eax
// 005bbef6  c706847d8300         mov dword ptr [esi], 0x837d84
// 005bbefc  c74610747d8300       mov dword ptr [esi + 0x10], 0x837d74
// 005bbf03  c746146c7d8300       mov dword ptr [esi + 0x14], 0x837d6c
// 005bbf0a  c74620647d8300       mov dword ptr [esi + 0x20], 0x837d64
// 005bbf11  c74624547d8300       mov dword ptr [esi + 0x24], 0x837d54
// 005bbf18  c74644447d8300       mov dword ptr [esi + 0x44], 0x837d44
// 005bbf1f  c74664347d8300       mov dword ptr [esi + 0x64], 0x837d34
// 005bbf26  c78684000000247d8300 mov dword ptr [esi + 0x84], 0x837d24
// 005bbf30  c786a4000000147d8300 mov dword ptr [esi + 0xa4], 0x837d14
// 005bbf3a  c786c4000000047d8300 mov dword ptr [esi + 0xc4], 0x837d04
// 005bbf44  8bc6                 mov eax, esi
// 005bbf46  5e                   pop esi
// 005bbf47  64890d00000000       mov dword ptr fs:[0], ecx
// 005bbf4e  83c410               add esp, 0x10
// 005bbf51  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
