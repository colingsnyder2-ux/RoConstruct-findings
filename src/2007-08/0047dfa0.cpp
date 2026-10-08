// from server: 100% by auto
// roc 2007-08 0047dfa0  unit: G3D::Win32Window  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047dfa0
//
// 0047dfa0  56                   push esi
// 0047dfa1  57                   push edi
// 0047dfa2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0047dfa6  8b07                 mov eax, dword ptr [edi]
// 0047dfa8  8bf1                 mov esi, ecx
// 0047dfaa  8d4f04               lea ecx, [edi + 4]
// 0047dfad  51                   push ecx
// 0047dfae  8d4e04               lea ecx, [esi + 4]
// 0047dfb1  8906                 mov dword ptr [esi], eax
// 0047dfb3  ff1590e67700         call dword ptr [0x77e690]
// 0047dfb9  8a5720               mov dl, byte ptr [edi + 0x20]
// 0047dfbc  885620               mov byte ptr [esi + 0x20], dl
// 0047dfbf  8b4724               mov eax, dword ptr [edi + 0x24]
// 0047dfc2  894624               mov dword ptr [esi + 0x24], eax
// 0047dfc5  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 0047dfc8  894e28               mov dword ptr [esi + 0x28], ecx
// 0047dfcb  83c72c               add edi, 0x2c
// 0047dfce  57                   push edi
// 0047dfcf  8d4e2c               lea ecx, [esi + 0x2c]
// 0047dfd2  e859f7ffff           call 0x47d730
// 0047dfd7  5f                   pop edi
// 0047dfd8  8bc6                 mov eax, esi
// 0047dfda  5e                   pop esi
// 0047dfdb  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??4JoystickInfo@_DirectInput@_internal@G3D@@QAEAAU0123@ABU0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
