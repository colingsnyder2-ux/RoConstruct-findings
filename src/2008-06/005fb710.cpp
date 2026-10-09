// roc 2008-06 005fb710  unit: RBX::Kernel  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fb710
//
// 005fb710  c70124118400         mov dword ptr [ecx], 0x841124
// 005fb716  c7411018118400       mov dword ptr [ecx + 0x10], 0x841118
// 005fb71d  c7411410118400       mov dword ptr [ecx + 0x14], 0x841110
// 005fb724  c7412008118400       mov dword ptr [ecx + 0x20], 0x841108
// 005fb72b  c74124f8108400       mov dword ptr [ecx + 0x24], 0x8410f8
// 005fb732  c74144e8108400       mov dword ptr [ecx + 0x44], 0x8410e8
// 005fb739  c74164d8108400       mov dword ptr [ecx + 0x64], 0x8410d8
// 005fb740  c78184000000c8108400 mov dword ptr [ecx + 0x84], 0x8410c8
// 005fb74a  c781a4000000b8108400 mov dword ptr [ecx + 0xa4], 0x8410b8
// 005fb754  c781c4000000a8108400 mov dword ptr [ecx + 0xc4], 0x8410a8
// 005fb75e  c78130010000a0108400 mov dword ptr [ecx + 0x130], 0x8410a0
// 005fb768  e9d35de1ff           jmp 0x411540
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??1?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
