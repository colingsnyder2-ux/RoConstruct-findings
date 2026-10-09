// roc 2008-06 00445260  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00445260
//
// 00445260  8b8978010000         mov ecx, dword ptr [ecx + 0x178]
// 00445266  8b442404             mov eax, dword ptr [esp + 4]
// 0044526a  8908                 mov dword ptr [eax], ecx
// 0044526c  c20400               ret 4
// library openrbx-client/Network\Player.cpp (function ?getTeamColor@Player@Network@RBX@@QBE?AVBrickColor@3@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Network/Player.cpp
