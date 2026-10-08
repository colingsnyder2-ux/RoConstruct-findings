// roc 2009-12 004d6710  unit: G3D::GWindow  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d6710
//
// 004d6710  51                   push ecx
// 004d6711  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004d6715  8d14c500000000       lea edx, [eax*8]
// 004d671c  2bd0                 sub edx, eax
// 004d671e  8b4104               mov eax, dword ptr [ecx + 4]
// 004d6721  56                   push esi
// 004d6722  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004d6726  8d4cd004             lea ecx, [eax + edx*8 + 4]
// 004d672a  51                   push ecx
// 004d672b  8bce                 mov ecx, esi
// 004d672d  c744240800000000     mov dword ptr [esp + 8], 0
// 004d6735  ff15f0b69800         call dword ptr [0x98b6f0]
// 004d673b  8bc6                 mov eax, esi
// 004d673d  5e                   pop esi
// 004d673e  59                   pop ecx
// 004d673f  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?getJoystickName@_DirectInput@_internal@G3D@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
