// roc 2009-12 004196e0  unit: CRBXHTMLControlSite  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004196e0
//
// 004196e0  8bc1                 mov eax, ecx
// 004196e2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004196e6  c70034279a00         mov dword ptr [eax], 0x9a2734
// 004196ec  894804               mov dword ptr [eax + 4], ecx
// 004196ef  c20400               ret 4
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0facet@locale@std@@IAE@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
