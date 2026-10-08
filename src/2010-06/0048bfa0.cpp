// from server: 100% by auto
// roc 2010-06 0048bfa0  unit: G3D::Win32Window  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048bfa0
//
// 0048bfa0  56                   push esi
// 0048bfa1  8bf1                 mov esi, ecx
// 0048bfa3  e838ffffff           call 0x48bee0
// 0048bfa8  8b8eb4010000         mov ecx, dword ptr [esi + 0x1b4]
// 0048bfae  8b442408             mov eax, dword ptr [esp + 8]
// 0048bfb2  5e                   pop esi
// 0048bfb3  394108               cmp dword ptr [ecx + 8], eax
// 0048bfb6  7609                 jbe 0x48bfc1
// 0048bfb8  89442404             mov dword ptr [esp + 4], eax
// 0048bfbc  e9efd3ffff           jmp 0x4893b0
// 0048bfc1  c20c00               ret 0xc
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?getJoystickState@Win32Window@G3D@@UAEXIAAV?$Array@M@2@AAV?$Array@_N@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
