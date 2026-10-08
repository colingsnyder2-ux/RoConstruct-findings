// roc 2009-12 004d59d0  unit: G3D::Win32Window  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d59d0
//
// 004d59d0  83c128               add ecx, 0x28
// 004d59d3  51                   push ecx
// 004d59d4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004d59d8  e853fdffff           call 0x4d5730
// 004d59dd  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?getSettings@Win32Window@G3D@@UBEXAAVSettings@GWindow@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
