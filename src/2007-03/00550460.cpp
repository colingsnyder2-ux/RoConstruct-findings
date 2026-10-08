// roc 2007-03 00550460  unit: seg_00550000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00550460
//
// 00550460  8b89f4000000         mov ecx, dword ptr [ecx + 0xf4]
// 00550466  8b442404             mov eax, dword ptr [esp + 4]
// 0055046a  8908                 mov dword ptr [eax], ecx
// 0055046c  c20400               ret 4
// library rbxgs/v8datamodel\Team.cpp (function ?getTeamColor@Team@RBX@@QBE?AVBrickColor@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Team.cpp
