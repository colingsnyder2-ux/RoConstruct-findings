// roc 2008-06 0062f280  unit: RBX::VBodyThrust::?$FactoryProduct  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062f280
//
// 0062f280  c701ac6f8400         mov dword ptr [ecx], 0x846fac
// 0062f286  c741109c6f8400       mov dword ptr [ecx + 0x10], 0x846f9c
// 0062f28d  c74114946f8400       mov dword ptr [ecx + 0x14], 0x846f94
// 0062f294  c741208c6f8400       mov dword ptr [ecx + 0x20], 0x846f8c
// 0062f29b  c741247c6f8400       mov dword ptr [ecx + 0x24], 0x846f7c
// 0062f2a2  c741446c6f8400       mov dword ptr [ecx + 0x44], 0x846f6c
// 0062f2a9  c741645c6f8400       mov dword ptr [ecx + 0x64], 0x846f5c
// 0062f2b0  c781840000004c6f8400 mov dword ptr [ecx + 0x84], 0x846f4c
// 0062f2ba  c781a40000003c6f8400 mov dword ptr [ecx + 0xa4], 0x846f3c
// 0062f2c4  c781c40000002c6f8400 mov dword ptr [ecx + 0xc4], 0x846f2c
// 0062f2ce  c78130010000106f8400 mov dword ptr [ecx + 0x130], 0x846f10
// 0062f2d8  c78138010000046f8400 mov dword ptr [ecx + 0x138], 0x846f04
// 0062f2e2  e979f1ffff           jmp 0x62e460
// library openrbx-client/App\v8datamodel\Gyro.cpp (function ??1?$FactoryProduct@VBodyForce@RBX@@VBodyMover@2@$1?sBodyForce@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Gyro.cpp
