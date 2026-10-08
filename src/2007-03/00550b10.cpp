// roc 2007-03 00550b10  unit: seg_00550000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00550b10
//
// 00550b10  8b442404             mov eax, dword ptr [esp + 4]
// 00550b14  8981f4000000         mov dword ptr [ecx + 0xf4], eax
// 00550b1a  c7442404a8bf8b00     mov dword ptr [esp + 4], 0x8bbfa8
// 00550b22  e91933efff           jmp 0x443e40
// library rbxgs/v8datamodel\Team.cpp (function ?setTeamColor@Team@RBX@@QAEXVBrickColor@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Team.cpp
