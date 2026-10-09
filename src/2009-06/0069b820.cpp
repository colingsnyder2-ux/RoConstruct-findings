// roc 2009-06 0069b820  unit: RBX::Flag  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0069b820
//
// 0069b820  8b8954020000         mov ecx, dword ptr [ecx + 0x254]
// 0069b826  8b442404             mov eax, dword ptr [esp + 4]
// 0069b82a  8908                 mov dword ptr [eax], ecx
// 0069b82c  c20400               ret 4
// library openrbx-client/App\v8datamodel\Flag.cpp (function ?getTeamColor@Flag@RBX@@QBE?AVBrickColor@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Flag.cpp
