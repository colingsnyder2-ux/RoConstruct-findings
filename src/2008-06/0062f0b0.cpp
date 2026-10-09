// roc 2008-06 0062f0b0  unit: RBX::BodyMover  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062f0b0
//
// 0062f0b0  c701dc6c8400         mov dword ptr [ecx], 0x846cdc
// 0062f0b6  c74110cc6c8400       mov dword ptr [ecx + 0x10], 0x846ccc
// 0062f0bd  c74114c46c8400       mov dword ptr [ecx + 0x14], 0x846cc4
// 0062f0c4  c74120bc6c8400       mov dword ptr [ecx + 0x20], 0x846cbc
// 0062f0cb  c74124ac6c8400       mov dword ptr [ecx + 0x24], 0x846cac
// 0062f0d2  c741449c6c8400       mov dword ptr [ecx + 0x44], 0x846c9c
// 0062f0d9  c741648c6c8400       mov dword ptr [ecx + 0x64], 0x846c8c
// 0062f0e0  c781840000007c6c8400 mov dword ptr [ecx + 0x84], 0x846c7c
// 0062f0ea  c781a40000006c6c8400 mov dword ptr [ecx + 0xa4], 0x846c6c
// 0062f0f4  c781c40000005c6c8400 mov dword ptr [ecx + 0xc4], 0x846c5c
// 0062f0fe  c78130010000406c8400 mov dword ptr [ecx + 0x130], 0x846c40
// 0062f108  c78138010000346c8400 mov dword ptr [ecx + 0x138], 0x846c34
// 0062f112  e949f3ffff           jmp 0x62e460
// library openrbx-client/App\v8datamodel\Gyro.cpp (function ??1?$FactoryProduct@VBodyForce@RBX@@VBodyMover@2@$1?sBodyForce@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Gyro.cpp
