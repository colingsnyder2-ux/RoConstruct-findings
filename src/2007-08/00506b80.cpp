// roc 2007-08 00506b80  unit: G3D::Ray  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00506b80
//
// 00506b80  8b442404             mov eax, dword ptr [esp + 4]
// 00506b84  d9400c               fld dword ptr [eax + 0xc]
// 00506b87  d86004               fsub dword ptr [eax + 4]
// 00506b8a  d95c2404             fstp dword ptr [esp + 4]
// 00506b8e  d9442404             fld dword ptr [esp + 4]
// 00506b92  d84908               fmul dword ptr [ecx + 8]
// 00506b95  d95c2404             fstp dword ptr [esp + 4]
// 00506b99  d9442404             fld dword ptr [esp + 4]
// 00506b9d  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?getImagePlaneDepth@GCamera@G3D@@QBEMABVRect2D@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
