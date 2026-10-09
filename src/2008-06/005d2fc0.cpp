// roc 2008-06 005d2fc0  unit: RBX::SpawnerService  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d2fc0
//
// 005d2fc0  6aff                 push -1
// 005d2fc2  68f8587d00           push 0x7d58f8
// 005d2fc7  64a100000000         mov eax, dword ptr fs:[0]
// 005d2fcd  50                   push eax
// 005d2fce  64892500000000       mov dword ptr fs:[0], esp
// 005d2fd5  51                   push ecx
// 005d2fd6  56                   push esi
// 005d2fd7  8bf1                 mov esi, ecx
// 005d2fd9  89742404             mov dword ptr [esp + 4], esi
// 005d2fdd  e82eedffff           call 0x5d1d10
// 005d2fe2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005d2fea  e801d8feff           call 0x5c07f0
// 005d2fef  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d2ff3  89461c               mov dword ptr [esi + 0x1c], eax
// 005d2ff6  c7064cbe8300         mov dword ptr [esi], 0x83be4c
// 005d2ffc  c746103cbe8300       mov dword ptr [esi + 0x10], 0x83be3c
// 005d3003  c7461434be8300       mov dword ptr [esi + 0x14], 0x83be34
// 005d300a  c746202cbe8300       mov dword ptr [esi + 0x20], 0x83be2c
// 005d3011  c746241cbe8300       mov dword ptr [esi + 0x24], 0x83be1c
// 005d3018  c746440cbe8300       mov dword ptr [esi + 0x44], 0x83be0c
// 005d301f  c74664fcbd8300       mov dword ptr [esi + 0x64], 0x83bdfc
// 005d3026  c78684000000ecbd8300 mov dword ptr [esi + 0x84], 0x83bdec
// 005d3030  c786a4000000dcbd8300 mov dword ptr [esi + 0xa4], 0x83bddc
// 005d303a  c786c4000000ccbd8300 mov dword ptr [esi + 0xc4], 0x83bdcc
// 005d3044  8bc6                 mov eax, esi
// 005d3046  5e                   pop esi
// 005d3047  64890d00000000       mov dword ptr fs:[0], ecx
// 005d304e  83c410               add esp, 0x10
// 005d3051  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
