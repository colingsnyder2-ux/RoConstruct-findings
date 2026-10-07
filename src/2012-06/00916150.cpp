// roc 2012-06 00916150  unit: RBX::MegaClusterPoly  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00916150
//
// 00916150  8b442404             mov eax, dword ptr [esp + 4]
// 00916154  8d0440               lea eax, [eax + eax*2]
// 00916157  8d0481               lea eax, [ecx + eax*4]
// 0091615a  c20400               ret 4
// library g3d-6.09/G3Dcpp\Capsule.cpp (function ??AMatrix3@G3D@@QBEPBMH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Capsule.cpp
