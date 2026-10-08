// roc 2007-03 0065c770  unit: seg_00650000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065c770
//
// 0065c770  8b8178010000         mov eax, dword ptr [ecx + 0x178]
// 0065c776  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ?getWalkToPart@Humanoid@RBX@@QBEPAVPartInstance@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
