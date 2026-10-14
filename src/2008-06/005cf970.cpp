// roc 2008-06 005cf970  unit: ChatEnter  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cf970
//
// 005cf970  56                   push esi
// 005cf971  8bf1                 mov esi, ecx
// 005cf973  e888ffffff           call 0x5cf900
// 005cf978  c706eca78300         mov dword ptr [esi], 0x83a7ec
// 005cf97e  c74610dca78300       mov dword ptr [esi + 0x10], 0x83a7dc
// 005cf985  c74614d4a78300       mov dword ptr [esi + 0x14], 0x83a7d4
// 005cf98c  c74620cca78300       mov dword ptr [esi + 0x20], 0x83a7cc
// 005cf993  c74624bca78300       mov dword ptr [esi + 0x24], 0x83a7bc
// 005cf99a  c74644aca78300       mov dword ptr [esi + 0x44], 0x83a7ac
// 005cf9a1  c746649ca78300       mov dword ptr [esi + 0x64], 0x83a79c
// 005cf9a8  c786840000008ca78300 mov dword ptr [esi + 0x84], 0x83a78c
// 005cf9b2  c786a40000007ca78300 mov dword ptr [esi + 0xa4], 0x83a77c
// 005cf9bc  c786c40000006ca78300 mov dword ptr [esi + 0xc4], 0x83a76c
// 005cf9c6  c7863001000064a78300 mov dword ptr [esi + 0x130], 0x83a764
// 005cf9d0  8bc6                 mov eax, esi
// 005cf9d2  5e                   pop esi
// 005cf9d3  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
