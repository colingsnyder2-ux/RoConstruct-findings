// from server: 100% by auto
// roc 2011-06 007a55b0  unit: RBX::Ball  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007a55b0
//
// 007a55b0  8b442404             mov eax, dword ptr [esp + 4]
// 007a55b4  8d0440               lea eax, [eax + eax*2]
// 007a55b7  8d0481               lea eax, [ecx + eax*4]
// 007a55ba  c20400               ret 4
// library g3d-6.09/G3Dcpp\Capsule.cpp (function ??AMatrix3@G3D@@QBEPBMH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Capsule.cpp
