// roc 2007-03 00503dc0  unit: seg_00500000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00503dc0
//
// 00503dc0  8bc1                 mov eax, ecx
// 00503dc2  33c9                 xor ecx, ecx
// 00503dc4  89480c               mov dword ptr [eax + 0xc], ecx
// 00503dc7  8908                 mov dword ptr [eax], ecx
// 00503dc9  894810               mov dword ptr [eax + 0x10], ecx
// 00503dcc  894804               mov dword ptr [eax + 4], ecx
// 00503dcf  894814               mov dword ptr [eax + 0x14], ecx
// 00503dd2  894808               mov dword ptr [eax + 8], ecx
// 00503dd5  c3                   ret 
// library rbxgs-g3d/G3Dcpp\MeshAlg.cpp (function ??0Face@MeshAlg@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/MeshAlg.cpp
