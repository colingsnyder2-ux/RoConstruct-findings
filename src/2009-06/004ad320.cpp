// roc 2009-06 004ad320  unit: G3D::Win32Window  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ad320
//
// 004ad320  d901                 fld dword ptr [ecx]
// 004ad322  8b442404             mov eax, dword ptr [esp + 4]
// 004ad326  d9e0                 fchs 
// 004ad328  d918                 fstp dword ptr [eax]
// 004ad32a  d94104               fld dword ptr [ecx + 4]
// 004ad32d  d9e0                 fchs 
// 004ad32f  d95804               fstp dword ptr [eax + 4]
// 004ad332  d94108               fld dword ptr [ecx + 8]
// 004ad335  d9e0                 fchs 
// 004ad337  d95808               fstp dword ptr [eax + 8]
// 004ad33a  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ??GVector3@G3D@@QBE?AV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
