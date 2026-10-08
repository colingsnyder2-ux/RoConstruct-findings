// roc 2007-03 00503de0  unit: seg_00500000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00503de0
//
// 00503de0  8bc1                 mov eax, ecx
// 00503de2  83c9ff               or ecx, 0xffffffff
// 00503de5  c70000000000         mov dword ptr [eax], 0
// 00503deb  894808               mov dword ptr [eax + 8], ecx
// 00503dee  c7400400000000       mov dword ptr [eax + 4], 0
// 00503df5  89480c               mov dword ptr [eax + 0xc], ecx
// 00503df8  c3                   ret 
// library rbxgs-g3d/G3Dcpp\MeshAlg.cpp (function ??0Edge@MeshAlg@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/MeshAlg.cpp
