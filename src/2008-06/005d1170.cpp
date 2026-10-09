// roc 2008-06 005d1170  unit: RBX::VStarterPackService::?$FactoryProduct  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d1170
//
// 005d1170  56                   push esi
// 005d1171  8bf1                 mov esi, ecx
// 005d1173  e898faffff           call 0x5d0c10
// 005d1178  c70624ae8300         mov dword ptr [esi], 0x83ae24
// 005d117e  c7461018ae8300       mov dword ptr [esi + 0x10], 0x83ae18
// 005d1185  c7461410ae8300       mov dword ptr [esi + 0x14], 0x83ae10
// 005d118c  c7462008ae8300       mov dword ptr [esi + 0x20], 0x83ae08
// 005d1193  c74624f8ad8300       mov dword ptr [esi + 0x24], 0x83adf8
// 005d119a  c74644e8ad8300       mov dword ptr [esi + 0x44], 0x83ade8
// 005d11a1  c74664d8ad8300       mov dword ptr [esi + 0x64], 0x83add8
// 005d11a8  c78684000000c8ad8300 mov dword ptr [esi + 0x84], 0x83adc8
// 005d11b2  c786a4000000b8ad8300 mov dword ptr [esi + 0xa4], 0x83adb8
// 005d11bc  c786c4000000a8ad8300 mov dword ptr [esi + 0xc4], 0x83ada8
// 005d11c6  c78630010000a0ad8300 mov dword ptr [esi + 0x130], 0x83ada0
// 005d11d0  8bc6                 mov eax, esi
// 005d11d2  5e                   pop esi
// 005d11d3  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
