// roc 2007-03 005abcc0  unit: seg_005a0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005abcc0
//
// 005abcc0  8b4108               mov eax, dword ptr [ecx + 8]
// 005abcc3  8b4024               mov eax, dword ptr [eax + 0x24]
// 005abcc6  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ?getMainPrimitive@Assembly@RBX@@QBEPAVPrimitive@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
