// roc 2008-06 00609af0  unit: RBX::Controller::W4ControllerType::?$EnumDesc  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00609af0
//
// 00609af0  c701642a8400         mov dword ptr [ecx], 0x842a64
// 00609af6  c74110542a8400       mov dword ptr [ecx + 0x10], 0x842a54
// 00609afd  c741144c2a8400       mov dword ptr [ecx + 0x14], 0x842a4c
// 00609b04  c74120442a8400       mov dword ptr [ecx + 0x20], 0x842a44
// 00609b0b  c74124342a8400       mov dword ptr [ecx + 0x24], 0x842a34
// 00609b12  c74144242a8400       mov dword ptr [ecx + 0x44], 0x842a24
// 00609b19  c74164142a8400       mov dword ptr [ecx + 0x64], 0x842a14
// 00609b20  c78184000000042a8400 mov dword ptr [ecx + 0x84], 0x842a04
// 00609b2a  c781a4000000f4298400 mov dword ptr [ecx + 0xa4], 0x8429f4
// 00609b34  c781c4000000e4298400 mov dword ptr [ecx + 0xc4], 0x8429e4
// 00609b3e  c78130010000cc298400 mov dword ptr [ecx + 0x130], 0x8429cc
// 00609b48  e9c392fdff           jmp 0x5e2e10
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??1?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
