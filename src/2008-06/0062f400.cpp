// roc 2008-06 0062f400  unit: RBX::VBodyVelocity::?$FactoryProduct  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062f400
//
// 0062f400  c7018c718400         mov dword ptr [ecx], 0x84718c
// 0062f406  c741107c718400       mov dword ptr [ecx + 0x10], 0x84717c
// 0062f40d  c7411474718400       mov dword ptr [ecx + 0x14], 0x847174
// 0062f414  c741206c718400       mov dword ptr [ecx + 0x20], 0x84716c
// 0062f41b  c741245c718400       mov dword ptr [ecx + 0x24], 0x84715c
// 0062f422  c741444c718400       mov dword ptr [ecx + 0x44], 0x84714c
// 0062f429  c741643c718400       mov dword ptr [ecx + 0x64], 0x84713c
// 0062f430  c781840000002c718400 mov dword ptr [ecx + 0x84], 0x84712c
// 0062f43a  c781a40000001c718400 mov dword ptr [ecx + 0xa4], 0x84711c
// 0062f444  c781c40000000c718400 mov dword ptr [ecx + 0xc4], 0x84710c
// 0062f44e  c78130010000f0708400 mov dword ptr [ecx + 0x130], 0x8470f0
// 0062f458  c78138010000e4708400 mov dword ptr [ecx + 0x138], 0x8470e4
// 0062f462  e9f9efffff           jmp 0x62e460
// library openrbx-client/App\v8datamodel\Gyro.cpp (function ??1?$FactoryProduct@VBodyForce@RBX@@VBodyMover@2@$1?sBodyForce@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Gyro.cpp
