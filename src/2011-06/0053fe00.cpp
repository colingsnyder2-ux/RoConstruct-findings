// from server: 100% by auto
// roc 2011-06 0053fe00  unit: G3D::MemoryManager  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0053fe00
//
// 0053fe00  8bc1                 mov eax, ecx
// 0053fe02  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0053fe06  d901                 fld dword ptr [ecx]
// 0053fe08  d918                 fstp dword ptr [eax]
// 0053fe0a  d94104               fld dword ptr [ecx + 4]
// 0053fe0d  d95804               fstp dword ptr [eax + 4]
// 0053fe10  d94108               fld dword ptr [ecx + 8]
// 0053fe13  d95808               fstp dword ptr [eax + 8]
// 0053fe16  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ??0Vector3@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
