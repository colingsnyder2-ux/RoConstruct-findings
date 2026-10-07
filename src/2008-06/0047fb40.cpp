// roc 2008-06 0047fb40  unit: G3D::GWindow  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047fb40
//
// 0047fb40  51                   push ecx
// 0047fb41  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0047fb45  8d14c500000000       lea edx, [eax*8]
// 0047fb4c  2bd0                 sub edx, eax
// 0047fb4e  8b4104               mov eax, dword ptr [ecx + 4]
// 0047fb51  56                   push esi
// 0047fb52  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0047fb56  8d4cd004             lea ecx, [eax + edx*8 + 4]
// 0047fb5a  51                   push ecx
// 0047fb5b  8bce                 mov ecx, esi
// 0047fb5d  c744240800000000     mov dword ptr [esp + 8], 0
// 0047fb65  ff155c248000         call dword ptr [0x80245c]
// 0047fb6b  8bc6                 mov eax, esi
// 0047fb6d  5e                   pop esi
// 0047fb6e  59                   pop ecx
// 0047fb6f  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?getJoystickName@_DirectInput@_internal@G3D@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
