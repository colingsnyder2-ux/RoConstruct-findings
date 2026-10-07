// roc 2012-06 00426d40  unit: CRBXHTMLControlSite  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00426d40
//
// 00426d40  8bc1                 mov eax, ecx
// 00426d42  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00426d46  c70030dab400         mov dword ptr [eax], 0xb4da30
// 00426d4c  894804               mov dword ptr [eax + 4], ecx
// 00426d4f  c20400               ret 4
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0facet@locale@std@@IAE@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
