// from server: 100% by auto
// roc 2012-06 0091ed40  unit: RBX::FilterInvisibleNonColliding  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0091ed40
//
// 0091ed40  8bc1                 mov eax, ecx
// 0091ed42  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0091ed46  c700e065bf00         mov dword ptr [eax], 0xbf65e0
// 0091ed4c  894804               mov dword ptr [eax + 4], ecx
// 0091ed4f  c20400               ret 4
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0facet@locale@std@@IAE@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
