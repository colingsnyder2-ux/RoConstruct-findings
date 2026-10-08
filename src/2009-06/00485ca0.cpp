// from server: 100% by auto
// roc 2009-06 00485ca0  unit: Ogre::RbxMeshPartAdapter  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00485ca0
//
// 00485ca0  8b01                 mov eax, dword ptr [ecx]
// 00485ca2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00485ca6  8d0448               lea eax, [eax + ecx*2]
// 00485ca9  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??A?$Array@G@G3D@@QAEAAGH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
