// from server: 100% by auto
// roc 2009-06 00485930  unit: RBX::MeshFileKey  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00485930
//
// 00485930  8bc1                 mov eax, ecx
// 00485932  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00485936  d901                 fld dword ptr [ecx]
// 00485938  d918                 fstp dword ptr [eax]
// 0048593a  d94104               fld dword ptr [ecx + 4]
// 0048593d  d95804               fstp dword ptr [eax + 4]
// 00485940  d94108               fld dword ptr [ecx + 8]
// 00485943  d95808               fstp dword ptr [eax + 8]
// 00485946  d9410c               fld dword ptr [ecx + 0xc]
// 00485949  d9580c               fstp dword ptr [eax + 0xc]
// 0048594c  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector4.cpp (function ??0Vector4@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector4.cpp
