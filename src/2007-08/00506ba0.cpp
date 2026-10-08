// from server: 100% by auto
// roc 2007-08 00506ba0  unit: G3D::Ray  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00506ba0
//
// 00506ba0  51                   push ecx
// 00506ba1  d9410c               fld dword ptr [ecx + 0xc]
// 00506ba4  d87108               fdiv dword ptr [ecx + 8]
// 00506ba7  d91c24               fstp dword ptr [esp]
// 00506baa  d90424               fld dword ptr [esp]
// 00506bad  59                   pop ecx
// 00506bae  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?getViewportHeight@GCamera@G3D@@QBEMABVRect2D@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
