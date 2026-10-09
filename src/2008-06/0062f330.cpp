// roc 2008-06 0062f330  unit: RBX::VBodyPosition::?$FactoryProduct  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062f330
//
// 0062f330  c7019c708400         mov dword ptr [ecx], 0x84709c
// 0062f336  c741108c708400       mov dword ptr [ecx + 0x10], 0x84708c
// 0062f33d  c7411484708400       mov dword ptr [ecx + 0x14], 0x847084
// 0062f344  c741207c708400       mov dword ptr [ecx + 0x20], 0x84707c
// 0062f34b  c741246c708400       mov dword ptr [ecx + 0x24], 0x84706c
// 0062f352  c741445c708400       mov dword ptr [ecx + 0x44], 0x84705c
// 0062f359  c741644c708400       mov dword ptr [ecx + 0x64], 0x84704c
// 0062f360  c781840000003c708400 mov dword ptr [ecx + 0x84], 0x84703c
// 0062f36a  c781a40000002c708400 mov dword ptr [ecx + 0xa4], 0x84702c
// 0062f374  c781c40000001c708400 mov dword ptr [ecx + 0xc4], 0x84701c
// 0062f37e  c7813001000000708400 mov dword ptr [ecx + 0x130], 0x847000
// 0062f388  c78138010000f46f8400 mov dword ptr [ecx + 0x138], 0x846ff4
// 0062f392  e9c9f0ffff           jmp 0x62e460
// library openrbx-client/App\v8datamodel\Gyro.cpp (function ??1?$FactoryProduct@VBodyForce@RBX@@VBodyMover@2@$1?sBodyForce@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Gyro.cpp
