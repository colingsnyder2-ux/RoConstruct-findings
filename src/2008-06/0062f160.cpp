// roc 2008-06 0062f160  unit: RBX::VBodyGyro::?$FactoryProduct  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062f160
//
// 0062f160  c701cc6d8400         mov dword ptr [ecx], 0x846dcc
// 0062f166  c74110bc6d8400       mov dword ptr [ecx + 0x10], 0x846dbc
// 0062f16d  c74114b46d8400       mov dword ptr [ecx + 0x14], 0x846db4
// 0062f174  c74120ac6d8400       mov dword ptr [ecx + 0x20], 0x846dac
// 0062f17b  c741249c6d8400       mov dword ptr [ecx + 0x24], 0x846d9c
// 0062f182  c741448c6d8400       mov dword ptr [ecx + 0x44], 0x846d8c
// 0062f189  c741647c6d8400       mov dword ptr [ecx + 0x64], 0x846d7c
// 0062f190  c781840000006c6d8400 mov dword ptr [ecx + 0x84], 0x846d6c
// 0062f19a  c781a40000005c6d8400 mov dword ptr [ecx + 0xa4], 0x846d5c
// 0062f1a4  c781c40000004c6d8400 mov dword ptr [ecx + 0xc4], 0x846d4c
// 0062f1ae  c78130010000306d8400 mov dword ptr [ecx + 0x130], 0x846d30
// 0062f1b8  c78138010000246d8400 mov dword ptr [ecx + 0x138], 0x846d24
// 0062f1c2  e999f2ffff           jmp 0x62e460
// library openrbx-client/App\v8datamodel\Gyro.cpp (function ??1?$FactoryProduct@VBodyForce@RBX@@VBodyMover@2@$1?sBodyForce@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Gyro.cpp
