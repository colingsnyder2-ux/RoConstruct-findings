// roc 2008-06 005d3e50  unit: RBX::VSkin::?$FactoryProduct  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d3e50
//
// 005d3e50  56                   push esi
// 005d3e51  8bf1                 mov esi, ecx
// 005d3e53  e88879f8ff           call 0x55b7e0
// 005d3e58  c706d4188200         mov dword ptr [esi], 0x8218d4
// 005d3e5e  c74610c8188200       mov dword ptr [esi + 0x10], 0x8218c8
// 005d3e65  c74614c0188200       mov dword ptr [esi + 0x14], 0x8218c0
// 005d3e6c  c74620b8188200       mov dword ptr [esi + 0x20], 0x8218b8
// 005d3e73  c74624a8188200       mov dword ptr [esi + 0x24], 0x8218a8
// 005d3e7a  c7464498188200       mov dword ptr [esi + 0x44], 0x821898
// 005d3e81  c7466488188200       mov dword ptr [esi + 0x64], 0x821888
// 005d3e88  c7868400000078188200 mov dword ptr [esi + 0x84], 0x821878
// 005d3e92  c786a400000068188200 mov dword ptr [esi + 0xa4], 0x821868
// 005d3e9c  c786c400000058188200 mov dword ptr [esi + 0xc4], 0x821858
// 005d3ea6  c7863001000050188200 mov dword ptr [esi + 0x130], 0x821850
// 005d3eb0  8bc6                 mov eax, esi
// 005d3eb2  5e                   pop esi
// 005d3eb3  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
