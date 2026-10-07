// roc 2007-08 0050f520  unit: G3D::TextInput::WrongSymbol  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050f520
//
// 0050f520  8b442404             mov eax, dword ptr [esp + 4]
// 0050f524  d94104               fld dword ptr [ecx + 4]
// 0050f527  d918                 fstp dword ptr [eax]
// 0050f529  d94108               fld dword ptr [ecx + 8]
// 0050f52c  d95804               fstp dword ptr [eax + 4]
// 0050f52f  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?yz@Vector3@G3D@@QBE?AVVector2@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
