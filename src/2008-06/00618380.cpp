// roc 2008-06 00618380  unit: RBX::NewNullTool  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00618380
//
// 00618380  8b898c020000         mov ecx, dword ptr [ecx + 0x28c]
// 00618386  8b442404             mov eax, dword ptr [esp + 4]
// 0061838a  8908                 mov dword ptr [eax], ecx
// 0061838c  c20400               ret 4
// library openrbx-client/App\v8datamodel\Flag.cpp (function ?getTeamColor@Flag@RBX@@QBE?AVBrickColor@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Flag.cpp
