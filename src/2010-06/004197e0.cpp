// roc 2010-06 004197e0  unit: CRBXHTMLControlSite  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004197e0
//
// 004197e0  8bc1                 mov eax, ecx
// 004197e2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004197e6  c7000c34a000         mov dword ptr [eax], 0xa0340c
// 004197ec  894804               mov dword ptr [eax + 4], ecx
// 004197ef  c20400               ret 4
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0facet@locale@std@@IAE@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
