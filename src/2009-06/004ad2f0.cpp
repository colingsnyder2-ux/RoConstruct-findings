// from server: 100% by auto
// roc 2009-06 004ad2f0  unit: G3D::Win32Window  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ad2f0
//
// 004ad2f0  56                   push esi
// 004ad2f1  8bf1                 mov esi, ecx
// 004ad2f3  e838ffffff           call 0x4ad230
// 004ad2f8  8b8eb4010000         mov ecx, dword ptr [esi + 0x1b4]
// 004ad2fe  8b442408             mov eax, dword ptr [esp + 8]
// 004ad302  5e                   pop esi
// 004ad303  394108               cmp dword ptr [ecx + 8], eax
// 004ad306  7609                 jbe 0x4ad311
// 004ad308  89442404             mov dword ptr [esp + 4], eax
// 004ad30c  e9efd3ffff           jmp 0x4aa700
// 004ad311  c20c00               ret 0xc
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?getJoystickState@Win32Window@G3D@@UAEXIAAV?$Array@M@2@AAV?$Array@_N@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
