// from server: 100% by auto
// roc 2010-06 00488750  unit: G3D::GWindow  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00488750
//
// 00488750  51                   push ecx
// 00488751  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00488755  8d14c500000000       lea edx, [eax*8]
// 0048875c  2bd0                 sub edx, eax
// 0048875e  8b4104               mov eax, dword ptr [ecx + 4]
// 00488761  56                   push esi
// 00488762  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00488766  8d4cd004             lea ecx, [eax + edx*8 + 4]
// 0048876a  51                   push ecx
// 0048876b  8bce                 mov ecx, esi
// 0048876d  c744240800000000     mov dword ptr [esp + 8], 0
// 00488775  ff150ca49e00         call dword ptr [0x9ea40c]
// 0048877b  8bc6                 mov eax, esi
// 0048877d  5e                   pop esi
// 0048877e  59                   pop ecx
// 0048877f  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?getJoystickName@_DirectInput@_internal@G3D@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
