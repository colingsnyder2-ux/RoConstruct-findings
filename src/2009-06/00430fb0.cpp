// roc 2009-06 00430fb0  unit: CStandardOutputView  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00430fb0
//
// 00430fb0  d9ee                 fldz 
// 00430fb2  8bc1                 mov eax, ecx
// 00430fb4  d910                 fst dword ptr [eax]
// 00430fb6  d95004               fst dword ptr [eax + 4]
// 00430fb9  d95808               fstp dword ptr [eax + 8]
// 00430fbc  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ??0Vector3@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
