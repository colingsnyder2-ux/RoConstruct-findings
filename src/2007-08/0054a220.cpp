// roc 2007-08 0054a220  unit: RBX::VServiceProvider::?$Notifier  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054a220
//
// 0054a220  56                   push esi
// 0054a221  8bf1                 mov esi, ecx
// 0054a223  e888fdffff           call 0x549fb0
// 0054a228  c7063c737a00         mov dword ptr [esi], 0x7a733c
// 0054a22e  c7460434737a00       mov dword ptr [esi + 4], 0x7a7334
// 0054a235  c746102c737a00       mov dword ptr [esi + 0x10], 0x7a732c
// 0054a23c  c746141c737a00       mov dword ptr [esi + 0x14], 0x7a731c
// 0054a243  c7462c0c737a00       mov dword ptr [esi + 0x2c], 0x7a730c
// 0054a24a  c74644fc727a00       mov dword ptr [esi + 0x44], 0x7a72fc
// 0054a251  c7465cec727a00       mov dword ptr [esi + 0x5c], 0x7a72ec
// 0054a258  c74674dc727a00       mov dword ptr [esi + 0x74], 0x7a72dc
// 0054a25f  c7868c000000cc727a00 mov dword ptr [esi + 0x8c], 0x7a72cc
// 0054a269  8bc6                 mov eax, esi
// 0054a26b  5e                   pop esi
// 0054a26c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
