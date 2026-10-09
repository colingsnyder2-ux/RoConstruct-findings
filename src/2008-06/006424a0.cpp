// roc 2008-06 006424a0  unit: RBX::VerbWidget  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006424a0
//
// 006424a0  c701aca78400         mov dword ptr [ecx], 0x84a7ac
// 006424a6  c741109ca78400       mov dword ptr [ecx + 0x10], 0x84a79c
// 006424ad  c7411494a78400       mov dword ptr [ecx + 0x14], 0x84a794
// 006424b4  c741208ca78400       mov dword ptr [ecx + 0x20], 0x84a78c
// 006424bb  c741247ca78400       mov dword ptr [ecx + 0x24], 0x84a77c
// 006424c2  c741446ca78400       mov dword ptr [ecx + 0x44], 0x84a76c
// 006424c9  c741645ca78400       mov dword ptr [ecx + 0x64], 0x84a75c
// 006424d0  c781840000004ca78400 mov dword ptr [ecx + 0x84], 0x84a74c
// 006424da  c781a40000003ca78400 mov dword ptr [ecx + 0xa4], 0x84a73c
// 006424e4  c781c40000002ca78400 mov dword ptr [ecx + 0xc4], 0x84a72c
// 006424ee  c7813001000024a78400 mov dword ptr [ecx + 0x130], 0x84a724
// 006424f8  e943f0dcff           jmp 0x411540
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??1?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
