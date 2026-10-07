// roc 2008-06 00518610  unit: G3D::TextInput::WrongSymbol  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00518610
//
// 00518610  8b442404             mov eax, dword ptr [esp + 4]
// 00518614  d94104               fld dword ptr [ecx + 4]
// 00518617  d918                 fstp dword ptr [eax]
// 00518619  d94108               fld dword ptr [ecx + 8]
// 0051861c  d95804               fstp dword ptr [eax + 4]
// 0051861f  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?yz@Vector3@G3D@@QBE?AVVector2@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
