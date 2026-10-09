// roc 2008-06 005d0a80  unit: RBX::VStarterPackService::?$FactoryProduct  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d0a80
//
// 005d0a80  6aff                 push -1
// 005d0a82  6898567d00           push 0x7d5698
// 005d0a87  64a100000000         mov eax, dword ptr fs:[0]
// 005d0a8d  50                   push eax
// 005d0a8e  64892500000000       mov dword ptr fs:[0], esp
// 005d0a95  51                   push ecx
// 005d0a96  56                   push esi
// 005d0a97  8bf1                 mov esi, ecx
// 005d0a99  89742404             mov dword ptr [esp + 4], esi
// 005d0a9d  e83eefffff           call 0x5cf9e0
// 005d0aa2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005d0aaa  e841f6feff           call 0x5c00f0
// 005d0aaf  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d0ab3  89461c               mov dword ptr [esi + 0x1c], eax
// 005d0ab6  c706e4b18300         mov dword ptr [esi], 0x83b1e4
// 005d0abc  c74610d4b18300       mov dword ptr [esi + 0x10], 0x83b1d4
// 005d0ac3  c74614ccb18300       mov dword ptr [esi + 0x14], 0x83b1cc
// 005d0aca  c74620c4b18300       mov dword ptr [esi + 0x20], 0x83b1c4
// 005d0ad1  c74624b4b18300       mov dword ptr [esi + 0x24], 0x83b1b4
// 005d0ad8  c74644a4b18300       mov dword ptr [esi + 0x44], 0x83b1a4
// 005d0adf  c7466494b18300       mov dword ptr [esi + 0x64], 0x83b194
// 005d0ae6  c7868400000084b18300 mov dword ptr [esi + 0x84], 0x83b184
// 005d0af0  c786a400000074b18300 mov dword ptr [esi + 0xa4], 0x83b174
// 005d0afa  c786c400000064b18300 mov dword ptr [esi + 0xc4], 0x83b164
// 005d0b04  c786300100005cb18300 mov dword ptr [esi + 0x130], 0x83b15c
// 005d0b0e  8bc6                 mov eax, esi
// 005d0b10  5e                   pop esi
// 005d0b11  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0b18  83c410               add esp, 0x10
// 005d0b1b  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$DescribedCreatable@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
