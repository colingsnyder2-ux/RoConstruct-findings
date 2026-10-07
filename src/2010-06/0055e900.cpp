// roc 2010-06 0055e900  unit: G3D::TextInput::WrongSymbol  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055e900
//
// 0055e900  8b442404             mov eax, dword ptr [esp + 4]
// 0055e904  d901                 fld dword ptr [ecx]
// 0055e906  d918                 fstp dword ptr [eax]
// 0055e908  d94108               fld dword ptr [ecx + 8]
// 0055e90b  d95804               fstp dword ptr [eax + 4]
// 0055e90e  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?xz@Vector3@G3D@@QBE?AVVector2@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
