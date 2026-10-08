// roc 2009-12 00419700  unit: CRBXHTMLControlSite  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00419700
//
// 00419700  8bc1                 mov eax, ecx
// 00419702  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00419706  c70040279a00         mov dword ptr [eax], 0x9a2740
// 0041970c  894804               mov dword ptr [eax + 4], ecx
// 0041970f  c20400               ret 4
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0facet@locale@std@@IAE@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
