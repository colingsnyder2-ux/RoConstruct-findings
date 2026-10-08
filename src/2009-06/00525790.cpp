// from server: 100% by auto
// roc 2009-06 00525790  unit: RBX::MeshRefPartAdapter  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00525790
//
// 00525790  8bc1                 mov eax, ecx
// 00525792  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00525796  c700649f8c00         mov dword ptr [eax], 0x8c9f64
// 0052579c  894804               mov dword ptr [eax + 4], ecx
// 0052579f  c20400               ret 4
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0facet@locale@std@@IAE@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
