// from server: 100% by auto
// roc 2008-06 00518630  unit: G3D::TextInput::WrongSymbol  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00518630
//
// 00518630  8b442404             mov eax, dword ptr [esp + 4]
// 00518634  d901                 fld dword ptr [ecx]
// 00518636  d918                 fstp dword ptr [eax]
// 00518638  d901                 fld dword ptr [ecx]
// 0051863a  d95804               fstp dword ptr [eax + 4]
// 0051863d  d901                 fld dword ptr [ecx]
// 0051863f  d95808               fstp dword ptr [eax + 8]
// 00518642  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?xxx@Vector3@G3D@@QBE?AV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
