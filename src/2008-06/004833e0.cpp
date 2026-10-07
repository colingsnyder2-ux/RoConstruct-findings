// roc 2008-06 004833e0  unit: G3D::Win32Window  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004833e0
//
// 004833e0  56                   push esi
// 004833e1  8bf1                 mov esi, ecx
// 004833e3  e838ffffff           call 0x483320
// 004833e8  8b8eb4010000         mov ecx, dword ptr [esi + 0x1b4]
// 004833ee  8b442408             mov eax, dword ptr [esp + 8]
// 004833f2  5e                   pop esi
// 004833f3  394108               cmp dword ptr [ecx + 8], eax
// 004833f6  7609                 jbe 0x483401
// 004833f8  89442404             mov dword ptr [esp + 4], eax
// 004833fc  e9dfd3ffff           jmp 0x4807e0
// 00483401  c20c00               ret 0xc
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?getJoystickState@Win32Window@G3D@@UAEXIAAV?$Array@M@2@AAV?$Array@_N@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
