// roc 2008-06 00585fa0  unit: RBX::Script  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00585fa0
//
// 00585fa0  c7019c128300         mov dword ptr [ecx], 0x83129c
// 00585fa6  c7411090128300       mov dword ptr [ecx + 0x10], 0x831290
// 00585fad  c7411488128300       mov dword ptr [ecx + 0x14], 0x831288
// 00585fb4  c7412080128300       mov dword ptr [ecx + 0x20], 0x831280
// 00585fbb  c7412470128300       mov dword ptr [ecx + 0x24], 0x831270
// 00585fc2  c7414460128300       mov dword ptr [ecx + 0x44], 0x831260
// 00585fc9  c7416450128300       mov dword ptr [ecx + 0x64], 0x831250
// 00585fd0  c7818400000040128300 mov dword ptr [ecx + 0x84], 0x831240
// 00585fda  c781a400000030128300 mov dword ptr [ecx + 0xa4], 0x831230
// 00585fe4  c781c400000020128300 mov dword ptr [ecx + 0xc4], 0x831220
// 00585fee  e94dfeffff           jmp 0x585e40
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
