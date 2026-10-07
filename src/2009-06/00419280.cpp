// roc 2009-06 00419280  unit: CRBXHTMLControlSite  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00419280
//
// 00419280  8bc1                 mov eax, ecx
// 00419282  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00419286  c70064fa8a00         mov dword ptr [eax], 0x8afa64
// 0041928c  894804               mov dword ptr [eax + 4], ecx
// 0041928f  c20400               ret 4
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0facet@locale@std@@IAE@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
