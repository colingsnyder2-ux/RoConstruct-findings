// roc 2008-06 0047f7e0  unit: G3D::Win32Window  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047f7e0
//
// 0047f7e0  8b01                 mov eax, dword ptr [ecx]
// 0047f7e2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0047f7e6  8d0488               lea eax, [eax + ecx*4]
// 0047f7e9  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??A?$Array@PBX@G3D@@QAEAAPBXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
