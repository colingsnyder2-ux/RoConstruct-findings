// roc 2007-03 004108a0  unit: seg_00410000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004108a0
//
// 004108a0  8b810c010000         mov eax, dword ptr [ecx + 0x10c]
// 004108a6  8b4804               mov ecx, dword ptr [eax + 4]
// 004108a9  85c9                 test ecx, ecx
// 004108ab  7503                 jne 0x4108b0
// 004108ad  33c0                 xor eax, eax
// 004108af  c3                   ret 
// 004108b0  8b4008               mov eax, dword ptr [eax + 8]
// 004108b3  2bc1                 sub eax, ecx
// 004108b5  c1f803               sar eax, 3
// 004108b8  c3                   ret 
// library rbxgs/v8datamodel\Selection.cpp (function ?size@Selection@RBX@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp
