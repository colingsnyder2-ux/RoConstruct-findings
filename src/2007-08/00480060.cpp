// from server: 100% by auto
// roc 2007-08 00480060  unit: G3D::Win32Window  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00480060
//
// 00480060  56                   push esi
// 00480061  8bf1                 mov esi, ecx
// 00480063  e838ffffff           call 0x47ffa0
// 00480068  8b8eb4010000         mov ecx, dword ptr [esi + 0x1b4]
// 0048006e  8b442408             mov eax, dword ptr [esp + 8]
// 00480072  394108               cmp dword ptr [ecx + 8], eax
// 00480075  5e                   pop esi
// 00480076  7609                 jbe 0x480081
// 00480078  89442404             mov dword ptr [esp + 4], eax
// 0048007c  e96fd1ffff           jmp 0x47d1f0
// 00480081  c20c00               ret 0xc
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?getJoystickState@Win32Window@G3D@@UAEXIAAV?$Array@M@2@AAV?$Array@_N@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
