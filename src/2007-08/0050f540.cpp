// from server: 100% by auto
// roc 2007-08 0050f540  unit: G3D::TextInput::WrongSymbol  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050f540
//
// 0050f540  8b442404             mov eax, dword ptr [esp + 4]
// 0050f544  d901                 fld dword ptr [ecx]
// 0050f546  d918                 fstp dword ptr [eax]
// 0050f548  d901                 fld dword ptr [ecx]
// 0050f54a  d95804               fstp dword ptr [eax + 4]
// 0050f54d  d901                 fld dword ptr [ecx]
// 0050f54f  d95808               fstp dword ptr [eax + 8]
// 0050f552  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?xxx@Vector3@G3D@@QBE?AV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
