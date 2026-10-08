// from server: 100% by auto
// roc 2007-08 0047b7f0  unit: G3D::Win32Window  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047b7f0
//
// 0047b7f0  8b442404             mov eax, dword ptr [esp + 4]
// 0047b7f4  8b542408             mov edx, dword ptr [esp + 8]
// 0047b7f8  894128               mov dword ptr [ecx + 0x28], eax
// 0047b7fb  89512c               mov dword ptr [ecx + 0x2c], edx
// 0047b7fe  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?notifyResize@Win32Window@G3D@@UAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
