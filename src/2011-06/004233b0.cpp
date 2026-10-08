// from server: 100% by auto
// roc 2011-06 004233b0  unit: CRBXHTMLControlSite  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004233b0
//
// 004233b0  8bc1                 mov eax, ecx
// 004233b2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004233b6  c7006844a600         mov dword ptr [eax], 0xa64468
// 004233bc  894804               mov dword ptr [eax + 4], ecx
// 004233bf  c20400               ret 4
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0facet@locale@std@@IAE@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
