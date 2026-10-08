// from server: 100% by auto
// roc 2010-06 00419800  unit: CRBXHTMLControlSite  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00419800
//
// 00419800  8bc1                 mov eax, ecx
// 00419802  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00419806  c7001834a000         mov dword ptr [eax], 0xa03418
// 0041980c  894804               mov dword ptr [eax + 4], ecx
// 0041980f  c20400               ret 4
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0facet@locale@std@@IAE@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
