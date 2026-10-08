// roc 2009-12 004d5ad0  unit: G3D::Win32Window  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d5ad0
//
// 004d5ad0  8b442404             mov eax, dword ptr [esp + 4]
// 004d5ad4  8b542408             mov edx, dword ptr [esp + 8]
// 004d5ad8  894128               mov dword ptr [ecx + 0x28], eax
// 004d5adb  89512c               mov dword ptr [ecx + 0x2c], edx
// 004d5ade  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?notifyResize@Win32Window@G3D@@UAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
