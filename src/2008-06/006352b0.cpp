// roc 2008-06 006352b0  unit: RBX::H$1?sIntValue::V?$Value::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006352b0
//
// 006352b0  c7018c858400         mov dword ptr [ecx], 0x84858c
// 006352b6  c741107c858400       mov dword ptr [ecx + 0x10], 0x84857c
// 006352bd  c7411474858400       mov dword ptr [ecx + 0x14], 0x848574
// 006352c4  c741206c858400       mov dword ptr [ecx + 0x20], 0x84856c
// 006352cb  c741245c858400       mov dword ptr [ecx + 0x24], 0x84855c
// 006352d2  c741444c858400       mov dword ptr [ecx + 0x44], 0x84854c
// 006352d9  c741643c858400       mov dword ptr [ecx + 0x64], 0x84853c
// 006352e0  c781840000002c858400 mov dword ptr [ecx + 0x84], 0x84852c
// 006352ea  c781a40000001c858400 mov dword ptr [ecx + 0xa4], 0x84851c
// 006352f4  c781c40000000c858400 mov dword ptr [ecx + 0xc4], 0x84850c
// 006352fe  e93d52f2ff           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
