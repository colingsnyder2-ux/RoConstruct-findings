// from server: 100% by auto
// roc 2007-08 0050f500  unit: G3D::TextInput::WrongSymbol  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050f500
//
// 0050f500  8b442404             mov eax, dword ptr [esp + 4]
// 0050f504  d901                 fld dword ptr [ecx]
// 0050f506  d918                 fstp dword ptr [eax]
// 0050f508  d94108               fld dword ptr [ecx + 8]
// 0050f50b  d95804               fstp dword ptr [eax + 4]
// 0050f50e  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?xz@Vector3@G3D@@QBE?AVVector2@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
