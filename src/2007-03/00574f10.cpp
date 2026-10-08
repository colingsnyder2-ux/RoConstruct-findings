// roc 2007-03 00574f10  unit: seg_00570000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00574f10
//
// 00574f10  8b81e0010000         mov eax, dword ptr [ecx + 0x1e0]
// 00574f16  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ?getPrimitive@PartInstance@RBX@@QAEPAVPrimitive@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
