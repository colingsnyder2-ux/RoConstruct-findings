// roc 2008-06 0043d880  unit: Vector3Item  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043d880
//
// 0043d880  8b442404             mov eax, dword ptr [esp + 4]
// 0043d884  8d0481               lea eax, [ecx + eax*4]
// 0043d887  c20400               ret 4
// library g3d-6.09/G3Dcpp\AABox.cpp (function ??AVector3@G3D@@QBEABMH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/AABox.cpp
