// roc 2007-03 00485520  unit: seg_00480000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00485520
//
// 00485520  8b8120010000         mov eax, dword ptr [ecx + 0x120]
// 00485526  c3                   ret 
// library rbxgs/v8datamodel\Teams.cpp (function ?getCharacter@Player@Network@RBX@@QBEPAVModelInstance@3@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Teams.cpp
