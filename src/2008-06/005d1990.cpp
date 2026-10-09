// roc 2008-06 005d1990  unit: RBX::Backpack  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d1990
//
// 005d1990  6aff                 push -1
// 005d1992  6818587d00           push 0x7d5818
// 005d1997  64a100000000         mov eax, dword ptr fs:[0]
// 005d199d  50                   push eax
// 005d199e  64892500000000       mov dword ptr fs:[0], esp
// 005d19a5  51                   push ecx
// 005d19a6  56                   push esi
// 005d19a7  8bf1                 mov esi, ecx
// 005d19a9  89742404             mov dword ptr [esp + 4], esi
// 005d19ad  e82efeffff           call 0x5d17e0
// 005d19b2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005d19ba  e8a1e7feff           call 0x5c0160
// 005d19bf  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d19c3  89461c               mov dword ptr [esi + 0x1c], eax
// 005d19c6  c706bcb88300         mov dword ptr [esi], 0x83b8bc
// 005d19cc  c74610acb88300       mov dword ptr [esi + 0x10], 0x83b8ac
// 005d19d3  c74614a4b88300       mov dword ptr [esi + 0x14], 0x83b8a4
// 005d19da  c746209cb88300       mov dword ptr [esi + 0x20], 0x83b89c
// 005d19e1  c746248cb88300       mov dword ptr [esi + 0x24], 0x83b88c
// 005d19e8  c746447cb88300       mov dword ptr [esi + 0x44], 0x83b87c
// 005d19ef  c746646cb88300       mov dword ptr [esi + 0x64], 0x83b86c
// 005d19f6  c786840000005cb88300 mov dword ptr [esi + 0x84], 0x83b85c
// 005d1a00  c786a40000004cb88300 mov dword ptr [esi + 0xa4], 0x83b84c
// 005d1a0a  c786c40000003cb88300 mov dword ptr [esi + 0xc4], 0x83b83c
// 005d1a14  c7863001000034b88300 mov dword ptr [esi + 0x130], 0x83b834
// 005d1a1e  8bc6                 mov eax, esi
// 005d1a20  5e                   pop esi
// 005d1a21  64890d00000000       mov dword ptr fs:[0], ecx
// 005d1a28  83c410               add esp, 0x10
// 005d1a2b  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$DescribedCreatable@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
