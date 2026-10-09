// roc 2008-06 005d17e0  unit: RBX::VHopperBin::?$FactoryProduct  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d17e0
//
// 005d17e0  56                   push esi
// 005d17e1  8bf1                 mov esi, ecx
// 005d17e3  e818e1ffff           call 0x5cf900
// 005d17e8  c706ccb78300         mov dword ptr [esi], 0x83b7cc
// 005d17ee  c74610c0b78300       mov dword ptr [esi + 0x10], 0x83b7c0
// 005d17f5  c74614b8b78300       mov dword ptr [esi + 0x14], 0x83b7b8
// 005d17fc  c74620b0b78300       mov dword ptr [esi + 0x20], 0x83b7b0
// 005d1803  c74624a0b78300       mov dword ptr [esi + 0x24], 0x83b7a0
// 005d180a  c7464490b78300       mov dword ptr [esi + 0x44], 0x83b790
// 005d1811  c7466480b78300       mov dword ptr [esi + 0x64], 0x83b780
// 005d1818  c7868400000070b78300 mov dword ptr [esi + 0x84], 0x83b770
// 005d1822  c786a400000060b78300 mov dword ptr [esi + 0xa4], 0x83b760
// 005d182c  c786c400000050b78300 mov dword ptr [esi + 0xc4], 0x83b750
// 005d1836  c7863001000048b78300 mov dword ptr [esi + 0x130], 0x83b748
// 005d1840  8bc6                 mov eax, esi
// 005d1842  5e                   pop esi
// 005d1843  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
