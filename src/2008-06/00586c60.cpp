// roc 2008-06 00586c60  unit: RBX::Script  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00586c60
//
// 00586c60  6aff                 push -1
// 00586c62  68d8137d00           push 0x7d13d8
// 00586c67  64a100000000         mov eax, dword ptr fs:[0]
// 00586c6d  50                   push eax
// 00586c6e  64892500000000       mov dword ptr fs:[0], esp
// 00586c75  51                   push ecx
// 00586c76  56                   push esi
// 00586c77  8bf1                 mov esi, ecx
// 00586c79  89742404             mov dword ptr [esp + 4], esi
// 00586c7d  e80effffff           call 0x586b90
// 00586c82  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00586c8a  e851fbffff           call 0x5867e0
// 00586c8f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00586c93  89461c               mov dword ptr [esi + 0x1c], eax
// 00586c96  c706d4148300         mov dword ptr [esi], 0x8314d4
// 00586c9c  c74610c8148300       mov dword ptr [esi + 0x10], 0x8314c8
// 00586ca3  c74614c0148300       mov dword ptr [esi + 0x14], 0x8314c0
// 00586caa  c74620b8148300       mov dword ptr [esi + 0x20], 0x8314b8
// 00586cb1  c74624a8148300       mov dword ptr [esi + 0x24], 0x8314a8
// 00586cb8  c7464498148300       mov dword ptr [esi + 0x44], 0x831498
// 00586cbf  c7466488148300       mov dword ptr [esi + 0x64], 0x831488
// 00586cc6  c7868400000078148300 mov dword ptr [esi + 0x84], 0x831478
// 00586cd0  c786a400000068148300 mov dword ptr [esi + 0xa4], 0x831468
// 00586cda  c786c400000058148300 mov dword ptr [esi + 0xc4], 0x831458
// 00586ce4  8bc6                 mov eax, esi
// 00586ce6  5e                   pop esi
// 00586ce7  64890d00000000       mov dword ptr fs:[0], ecx
// 00586cee  83c410               add esp, 0x10
// 00586cf1  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
