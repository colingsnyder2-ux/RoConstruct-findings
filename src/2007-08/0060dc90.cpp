// from server: 100% by auto
// roc 2007-08 0060dc90  unit: RBX::Ball  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060dc90
//
// 0060dc90  8b442404             mov eax, dword ptr [esp + 4]
// 0060dc94  8d0440               lea eax, [eax + eax*2]
// 0060dc97  8d0481               lea eax, [ecx + eax*4]
// 0060dc9a  c20400               ret 4
// library g3d-6.09/G3Dcpp\Capsule.cpp (function ??AMatrix3@G3D@@QBEPBMH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Capsule.cpp
