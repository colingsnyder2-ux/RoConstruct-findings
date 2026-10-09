// roc 2008-06 005b0a00  unit: RBX::Accoutrement  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b0a00
//
// 005b0a00  c701b44a8300         mov dword ptr [ecx], 0x834ab4
// 005b0a06  c74110a44a8300       mov dword ptr [ecx + 0x10], 0x834aa4
// 005b0a0d  c741149c4a8300       mov dword ptr [ecx + 0x14], 0x834a9c
// 005b0a14  c74120944a8300       mov dword ptr [ecx + 0x20], 0x834a94
// 005b0a1b  c74124844a8300       mov dword ptr [ecx + 0x24], 0x834a84
// 005b0a22  c74144744a8300       mov dword ptr [ecx + 0x44], 0x834a74
// 005b0a29  c74164644a8300       mov dword ptr [ecx + 0x64], 0x834a64
// 005b0a30  c78184000000544a8300 mov dword ptr [ecx + 0x84], 0x834a54
// 005b0a3a  c781a4000000444a8300 mov dword ptr [ecx + 0xa4], 0x834a44
// 005b0a44  c781c4000000344a8300 mov dword ptr [ecx + 0xc4], 0x834a34
// 005b0a4e  e9ed9afaff           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
