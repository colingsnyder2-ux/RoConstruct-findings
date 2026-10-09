// roc 2008-06 005fb7b0  unit: RBX::VLocalBackpackItem::?$FactoryProduct  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fb7b0
//
// 005fb7b0  c7012c128400         mov dword ptr [ecx], 0x84122c
// 005fb7b6  c741101c128400       mov dword ptr [ecx + 0x10], 0x84121c
// 005fb7bd  c7411414128400       mov dword ptr [ecx + 0x14], 0x841214
// 005fb7c4  c741200c128400       mov dword ptr [ecx + 0x20], 0x84120c
// 005fb7cb  c74124fc118400       mov dword ptr [ecx + 0x24], 0x8411fc
// 005fb7d2  c74144ec118400       mov dword ptr [ecx + 0x44], 0x8411ec
// 005fb7d9  c74164dc118400       mov dword ptr [ecx + 0x64], 0x8411dc
// 005fb7e0  c78184000000cc118400 mov dword ptr [ecx + 0x84], 0x8411cc
// 005fb7ea  c781a4000000bc118400 mov dword ptr [ecx + 0xa4], 0x8411bc
// 005fb7f4  c781c4000000ac118400 mov dword ptr [ecx + 0xc4], 0x8411ac
// 005fb7fe  c78130010000a4118400 mov dword ptr [ecx + 0x130], 0x8411a4
// 005fb808  e9335de1ff           jmp 0x411540
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??1?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
