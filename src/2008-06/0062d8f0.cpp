// roc 2008-06 0062d8f0  unit: RBX::ForceField  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062d8f0
//
// 0062d8f0  c70104698400         mov dword ptr [ecx], 0x846904
// 0062d8f6  c74110f4688400       mov dword ptr [ecx + 0x10], 0x8468f4
// 0062d8fd  c74114ec688400       mov dword ptr [ecx + 0x14], 0x8468ec
// 0062d904  c74120e4688400       mov dword ptr [ecx + 0x20], 0x8468e4
// 0062d90b  c74124d4688400       mov dword ptr [ecx + 0x24], 0x8468d4
// 0062d912  c74144c4688400       mov dword ptr [ecx + 0x44], 0x8468c4
// 0062d919  c74164b4688400       mov dword ptr [ecx + 0x64], 0x8468b4
// 0062d920  c78184000000a4688400 mov dword ptr [ecx + 0x84], 0x8468a4
// 0062d92a  c781a400000094688400 mov dword ptr [ecx + 0xa4], 0x846894
// 0062d934  c781c400000084688400 mov dword ptr [ecx + 0xc4], 0x846884
// 0062d93e  e9fdcbf2ff           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
