// from server: 100% by auto
// roc 2010-06 0055e920  unit: G3D::TextInput::WrongSymbol  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055e920
//
// 0055e920  8b442404             mov eax, dword ptr [esp + 4]
// 0055e924  d94104               fld dword ptr [ecx + 4]
// 0055e927  d918                 fstp dword ptr [eax]
// 0055e929  d94108               fld dword ptr [ecx + 8]
// 0055e92c  d95804               fstp dword ptr [eax + 4]
// 0055e92f  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?yz@Vector3@G3D@@QBE?AVVector2@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
