// roc 2008-06 0040cb60  unit: RBX::Reflection::Metadata::VFunctions::?$FactoryProduct  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040cb60
//
// 0040cb60  6aff                 push -1
// 0040cb62  6878d37b00           push 0x7bd378
// 0040cb67  64a100000000         mov eax, dword ptr fs:[0]
// 0040cb6d  50                   push eax
// 0040cb6e  64892500000000       mov dword ptr fs:[0], esp
// 0040cb75  51                   push ecx
// 0040cb76  56                   push esi
// 0040cb77  8bf1                 mov esi, ecx
// 0040cb79  89742404             mov dword ptr [esp + 4], esi
// 0040cb7d  e87ef6ffff           call 0x40c200
// 0040cb82  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040cb8a  e831f8ffff           call 0x40c3c0
// 0040cb8f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040cb93  89461c               mov dword ptr [esi + 0x1c], eax
// 0040cb96  c706c4c68000         mov dword ptr [esi], 0x80c6c4
// 0040cb9c  c74610b8c68000       mov dword ptr [esi + 0x10], 0x80c6b8
// 0040cba3  c74614b0c68000       mov dword ptr [esi + 0x14], 0x80c6b0
// 0040cbaa  c74620a8c68000       mov dword ptr [esi + 0x20], 0x80c6a8
// 0040cbb1  c7462498c68000       mov dword ptr [esi + 0x24], 0x80c698
// 0040cbb8  c7464488c68000       mov dword ptr [esi + 0x44], 0x80c688
// 0040cbbf  c7466478c68000       mov dword ptr [esi + 0x64], 0x80c678
// 0040cbc6  c7868400000068c68000 mov dword ptr [esi + 0x84], 0x80c668
// 0040cbd0  c786a400000058c68000 mov dword ptr [esi + 0xa4], 0x80c658
// 0040cbda  c786c400000048c68000 mov dword ptr [esi + 0xc4], 0x80c648
// 0040cbe4  8bc6                 mov eax, esi
// 0040cbe6  5e                   pop esi
// 0040cbe7  64890d00000000       mov dword ptr fs:[0], ecx
// 0040cbee  83c410               add esp, 0x10
// 0040cbf1  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
