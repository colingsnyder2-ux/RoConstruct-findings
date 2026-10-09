// roc 2008-06 00565e40  unit: RBX::Team  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00565e40
//
// 00565e40  8b8934010000         mov ecx, dword ptr [ecx + 0x134]
// 00565e46  8b442404             mov eax, dword ptr [esp + 4]
// 00565e4a  8908                 mov dword ptr [eax], ecx
// 00565e4c  c20400               ret 4
// library openrbx-client/App\v8datamodel\Team.cpp (function ?getTeamColor@Team@RBX@@QBE?AVBrickColor@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Team.cpp
