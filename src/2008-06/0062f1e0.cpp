// roc 2008-06 0062f1e0  unit: RBX::VBodyForce::?$FactoryProduct  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062f1e0
//
// 0062f1e0  c701bc6e8400         mov dword ptr [ecx], 0x846ebc
// 0062f1e6  c74110ac6e8400       mov dword ptr [ecx + 0x10], 0x846eac
// 0062f1ed  c74114a46e8400       mov dword ptr [ecx + 0x14], 0x846ea4
// 0062f1f4  c741209c6e8400       mov dword ptr [ecx + 0x20], 0x846e9c
// 0062f1fb  c741248c6e8400       mov dword ptr [ecx + 0x24], 0x846e8c
// 0062f202  c741447c6e8400       mov dword ptr [ecx + 0x44], 0x846e7c
// 0062f209  c741646c6e8400       mov dword ptr [ecx + 0x64], 0x846e6c
// 0062f210  c781840000005c6e8400 mov dword ptr [ecx + 0x84], 0x846e5c
// 0062f21a  c781a40000004c6e8400 mov dword ptr [ecx + 0xa4], 0x846e4c
// 0062f224  c781c40000003c6e8400 mov dword ptr [ecx + 0xc4], 0x846e3c
// 0062f22e  c78130010000206e8400 mov dword ptr [ecx + 0x130], 0x846e20
// 0062f238  c78138010000146e8400 mov dword ptr [ecx + 0x138], 0x846e14
// 0062f242  e919f2ffff           jmp 0x62e460
// library openrbx-client/App\v8datamodel\Gyro.cpp (function ??1?$FactoryProduct@VBodyForce@RBX@@VBodyMover@2@$1?sBodyForce@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Gyro.cpp
