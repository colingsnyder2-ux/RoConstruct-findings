// roc 2009-06 00430fc0  unit: CStandardOutputView  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00430fc0
//
// 00430fc0  8bc1                 mov eax, ecx
// 00430fc2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00430fc6  d901                 fld dword ptr [ecx]
// 00430fc8  d918                 fstp dword ptr [eax]
// 00430fca  d94104               fld dword ptr [ecx + 4]
// 00430fcd  d95804               fstp dword ptr [eax + 4]
// 00430fd0  d94108               fld dword ptr [ecx + 8]
// 00430fd3  d95808               fstp dword ptr [eax + 8]
// 00430fd6  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ??0Vector3@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
