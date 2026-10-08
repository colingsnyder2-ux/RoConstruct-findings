// roc 2009-12 004d9e10  unit: G3D::Win32Window  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d9e10
//
// 004d9e10  56                   push esi
// 004d9e11  8bf1                 mov esi, ecx
// 004d9e13  e838ffffff           call 0x4d9d50
// 004d9e18  8b8eb4010000         mov ecx, dword ptr [esi + 0x1b4]
// 004d9e1e  8b442408             mov eax, dword ptr [esp + 8]
// 004d9e22  5e                   pop esi
// 004d9e23  394108               cmp dword ptr [ecx + 8], eax
// 004d9e26  7609                 jbe 0x4d9e31
// 004d9e28  89442404             mov dword ptr [esp + 4], eax
// 004d9e2c  e9bfd3ffff           jmp 0x4d71f0
// 004d9e31  c20c00               ret 0xc
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?getJoystickState@Win32Window@G3D@@UAEXIAAV?$Array@M@2@AAV?$Array@_N@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
