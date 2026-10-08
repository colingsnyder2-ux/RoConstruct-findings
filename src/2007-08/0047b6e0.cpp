// from server: 100% by auto
// roc 2007-08 0047b6e0  unit: G3D::Win32Window  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047b6e0
//
// 0047b6e0  83c128               add ecx, 0x28
// 0047b6e3  51                   push ecx
// 0047b6e4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0047b6e8  e813fdffff           call 0x47b400
// 0047b6ed  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?getSettings@Win32Window@G3D@@UBEXAAVSettings@GWindow@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
