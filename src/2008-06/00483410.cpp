// roc 2008-06 00483410  unit: G3D::Win32Window  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00483410
//
// 00483410  d901                 fld dword ptr [ecx]
// 00483412  8b442404             mov eax, dword ptr [esp + 4]
// 00483416  d9e0                 fchs 
// 00483418  d918                 fstp dword ptr [eax]
// 0048341a  d94104               fld dword ptr [ecx + 4]
// 0048341d  d9e0                 fchs 
// 0048341f  d95804               fstp dword ptr [eax + 4]
// 00483422  d94108               fld dword ptr [ecx + 8]
// 00483425  d9e0                 fchs 
// 00483427  d95808               fstp dword ptr [eax + 8]
// 0048342a  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ??GVector3@G3D@@QBE?AV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
