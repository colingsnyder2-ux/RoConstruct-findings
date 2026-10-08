// roc 2007-03 0044b5c0  unit: seg_00440000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0044b5c0
//
// 0044b5c0  8b81a4000000         mov eax, dword ptr [ecx + 0xa4]
// 0044b5c6  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ?getMechanism@Assembly@RBX@@QAEPAVMechanism@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
