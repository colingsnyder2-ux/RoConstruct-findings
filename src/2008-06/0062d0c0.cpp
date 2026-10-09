// roc 2008-06 0062d0c0  unit: RBX::ForceField  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062d0c0
//
// 0062d0c0  c70194668400         mov dword ptr [ecx], 0x846694
// 0062d0c6  c7411084668400       mov dword ptr [ecx + 0x10], 0x846684
// 0062d0cd  c741147c668400       mov dword ptr [ecx + 0x14], 0x84667c
// 0062d0d4  c7412074668400       mov dword ptr [ecx + 0x20], 0x846674
// 0062d0db  c7412464668400       mov dword ptr [ecx + 0x24], 0x846664
// 0062d0e2  c7414454668400       mov dword ptr [ecx + 0x44], 0x846654
// 0062d0e9  c7416444668400       mov dword ptr [ecx + 0x64], 0x846644
// 0062d0f0  c7818400000034668400 mov dword ptr [ecx + 0x84], 0x846634
// 0062d0fa  c781a400000024668400 mov dword ptr [ecx + 0xa4], 0x846624
// 0062d104  c781c400000014668400 mov dword ptr [ecx + 0xc4], 0x846614
// 0062d10e  e92dd4f2ff           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
