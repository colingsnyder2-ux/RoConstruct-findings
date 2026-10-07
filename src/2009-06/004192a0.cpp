// roc 2009-06 004192a0  unit: CRBXHTMLControlSite  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004192a0
//
// 004192a0  8bc1                 mov eax, ecx
// 004192a2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004192a6  c70070fa8a00         mov dword ptr [eax], 0x8afa70
// 004192ac  894804               mov dword ptr [eax + 4], ecx
// 004192af  c20400               ret 4
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0facet@locale@std@@IAE@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
