// roc 2011-06 006915a0  unit: RBX::VBasicPartInstance::?$FactoryProduct  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006915a0
//
// 006915a0  8b8990020000         mov ecx, dword ptr [ecx + 0x290]
// 006915a6  8b442404             mov eax, dword ptr [esp + 4]
// 006915aa  8908                 mov dword ptr [eax], ecx
// 006915ac  c20400               ret 4
// library openrbx-client/App\v8datamodel\SpawnLocation.cpp (function ?getTeamColor@SpawnLocation@RBX@@QBE?AVBrickColor@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/SpawnLocation.cpp
