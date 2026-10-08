// from server: 100% by auto
// roc 2010-06 00487a00  unit: G3D::Win32Window  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00487a00
//
// 00487a00  8b442404             mov eax, dword ptr [esp + 4]
// 00487a04  8b542408             mov edx, dword ptr [esp + 8]
// 00487a08  894128               mov dword ptr [ecx + 0x28], eax
// 00487a0b  89512c               mov dword ptr [ecx + 0x2c], edx
// 00487a0e  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?notifyResize@Win32Window@G3D@@UAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
