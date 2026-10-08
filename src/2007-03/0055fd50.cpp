// roc 2007-03 0055fd50  unit: seg_00550000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055fd50
//
// 0055fd50  8b8194010000         mov eax, dword ptr [ecx + 0x194]
// 0055fd56  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ?getCameraType@Camera@RBX@@QBE?AW4CameraType@12@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
