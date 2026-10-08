// from server: 100% by auto
// roc 2008-06 0047edd0  unit: G3D::Win32Window  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047edd0
//
// 0047edd0  8b442404             mov eax, dword ptr [esp + 4]
// 0047edd4  8b542408             mov edx, dword ptr [esp + 8]
// 0047edd8  894128               mov dword ptr [ecx + 0x28], eax
// 0047eddb  89512c               mov dword ptr [ecx + 0x2c], edx
// 0047edde  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?notifyResize@Win32Window@G3D@@UAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
