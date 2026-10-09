// roc 2008-06 00411720  unit: CBrush  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00411720
//
// 00411720  56                   push esi
// 00411721  8bf1                 mov esi, ecx
// 00411723  e8a8221600           call 0x5739d0
// 00411728  c7062ce18000         mov dword ptr [esi], 0x80e12c
// 0041172e  c7461020e18000       mov dword ptr [esi + 0x10], 0x80e120
// 00411735  c7461418e18000       mov dword ptr [esi + 0x14], 0x80e118
// 0041173c  c7462010e18000       mov dword ptr [esi + 0x20], 0x80e110
// 00411743  c7462400e18000       mov dword ptr [esi + 0x24], 0x80e100
// 0041174a  c74644f0e08000       mov dword ptr [esi + 0x44], 0x80e0f0
// 00411751  c74664e0e08000       mov dword ptr [esi + 0x64], 0x80e0e0
// 00411758  c78684000000d0e08000 mov dword ptr [esi + 0x84], 0x80e0d0
// 00411762  c786a4000000c0e08000 mov dword ptr [esi + 0xa4], 0x80e0c0
// 0041176c  c786c4000000b0e08000 mov dword ptr [esi + 0xc4], 0x80e0b0
// 00411776  c78630010000a8e08000 mov dword ptr [esi + 0x130], 0x80e0a8
// 00411780  8bc6                 mov eax, esi
// 00411782  5e                   pop esi
// 00411783  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
