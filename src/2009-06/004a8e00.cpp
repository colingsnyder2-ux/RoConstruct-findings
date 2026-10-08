// from server: 100% by auto
// roc 2009-06 004a8e00  unit: G3D::Win32Window  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a8e00
//
// 004a8e00  83c128               add ecx, 0x28
// 004a8e03  51                   push ecx
// 004a8e04  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a8e08  e853fdffff           call 0x4a8b60
// 004a8e0d  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?getSettings@Win32Window@G3D@@UBEXAAVSettings@GWindow@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
