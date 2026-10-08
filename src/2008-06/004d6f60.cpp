// from server: 100% by auto
// roc 2008-06 004d6f60  unit: CSHA1  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d6f60
//
// 004d6f60  8bc1                 mov eax, ecx
// 004d6f62  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d6f66  c700446b8200         mov dword ptr [eax], 0x826b44
// 004d6f6c  894804               mov dword ptr [eax + 4], ecx
// 004d6f6f  c20400               ret 4
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0facet@locale@std@@IAE@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
