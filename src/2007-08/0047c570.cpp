// roc 2007-08 0047c570  unit: G3D::GWindow  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047c570
//
// 0047c570  51                   push ecx
// 0047c571  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0047c575  8d14c500000000       lea edx, [eax*8]
// 0047c57c  2bd0                 sub edx, eax
// 0047c57e  8b4104               mov eax, dword ptr [ecx + 4]
// 0047c581  56                   push esi
// 0047c582  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0047c586  8d4cd004             lea ecx, [eax + edx*8 + 4]
// 0047c58a  51                   push ecx
// 0047c58b  8bce                 mov ecx, esi
// 0047c58d  c744240800000000     mov dword ptr [esp + 8], 0
// 0047c595  ff159ce67700         call dword ptr [0x77e69c]
// 0047c59b  8bc6                 mov eax, esi
// 0047c59d  5e                   pop esi
// 0047c59e  59                   pop ecx
// 0047c59f  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?getJoystickName@_DirectInput@_internal@G3D@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
