// from server: 100% by auto
// roc 2008-06 004377b0  unit: CStandardOutputView  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004377b0
//
// 004377b0  d9ee                 fldz 
// 004377b2  8bc1                 mov eax, ecx
// 004377b4  d910                 fst dword ptr [eax]
// 004377b6  d95004               fst dword ptr [eax + 4]
// 004377b9  d95808               fstp dword ptr [eax + 8]
// 004377bc  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ??0Vector3@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
