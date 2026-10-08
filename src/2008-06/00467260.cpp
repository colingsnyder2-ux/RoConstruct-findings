// from server: 100% by auto
// roc 2008-06 00467260  unit: CSettingsDialog  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00467260
//
// 00467260  d9ee                 fldz 
// 00467262  8bc1                 mov eax, ecx
// 00467264  d910                 fst dword ptr [eax]
// 00467266  d95804               fstp dword ptr [eax + 4]
// 00467269  c3                   ret 
// library g3d-6.09/G3Dcpp\ConvexPolyhedron.cpp (function ??0Vector2@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/ConvexPolyhedron.cpp
