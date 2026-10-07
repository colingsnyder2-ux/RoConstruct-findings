// roc 2009-06 004a9be0  unit: G3D::GWindow  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a9be0
//
// 004a9be0  51                   push ecx
// 004a9be1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004a9be5  8d14c500000000       lea edx, [eax*8]
// 004a9bec  2bd0                 sub edx, eax
// 004a9bee  8b4104               mov eax, dword ptr [ecx + 4]
// 004a9bf1  56                   push esi
// 004a9bf2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004a9bf6  8d4cd004             lea ecx, [eax + edx*8 + 4]
// 004a9bfa  51                   push ecx
// 004a9bfb  8bce                 mov ecx, esi
// 004a9bfd  c744240800000000     mov dword ptr [esp + 8], 0
// 004a9c05  ff15b8e48900         call dword ptr [0x89e4b8]
// 004a9c0b  8bc6                 mov eax, esi
// 004a9c0d  5e                   pop esi
// 004a9c0e  59                   pop ecx
// 004a9c0f  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?getJoystickName@_DirectInput@_internal@G3D@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
