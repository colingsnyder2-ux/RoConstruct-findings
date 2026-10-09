// roc 2008-06 0040c990  unit: VAuthoringSettings::?$FactoryProduct  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040c990
//
// 0040c990  6aff                 push -1
// 0040c992  6838d37b00           push 0x7bd338
// 0040c997  64a100000000         mov eax, dword ptr fs:[0]
// 0040c99d  50                   push eax
// 0040c99e  64892500000000       mov dword ptr fs:[0], esp
// 0040c9a5  51                   push ecx
// 0040c9a6  56                   push esi
// 0040c9a7  8bf1                 mov esi, ecx
// 0040c9a9  89742404             mov dword ptr [esp + 4], esi
// 0040c9ad  e89ef2ffff           call 0x40bc50
// 0040c9b2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040c9ba  e851f4ffff           call 0x40be10
// 0040c9bf  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040c9c3  89461c               mov dword ptr [esi + 0x1c], eax
// 0040c9c6  c70644c58000         mov dword ptr [esi], 0x80c544
// 0040c9cc  c7461038c58000       mov dword ptr [esi + 0x10], 0x80c538
// 0040c9d3  c7461430c58000       mov dword ptr [esi + 0x14], 0x80c530
// 0040c9da  c7462028c58000       mov dword ptr [esi + 0x20], 0x80c528
// 0040c9e1  c7462418c58000       mov dword ptr [esi + 0x24], 0x80c518
// 0040c9e8  c7464408c58000       mov dword ptr [esi + 0x44], 0x80c508
// 0040c9ef  c74664f8c48000       mov dword ptr [esi + 0x64], 0x80c4f8
// 0040c9f6  c78684000000e8c48000 mov dword ptr [esi + 0x84], 0x80c4e8
// 0040ca00  c786a4000000d8c48000 mov dword ptr [esi + 0xa4], 0x80c4d8
// 0040ca0a  c786c4000000c8c48000 mov dword ptr [esi + 0xc4], 0x80c4c8
// 0040ca14  8bc6                 mov eax, esi
// 0040ca16  5e                   pop esi
// 0040ca17  64890d00000000       mov dword ptr fs:[0], ecx
// 0040ca1e  83c410               add esp, 0x10
// 0040ca21  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
