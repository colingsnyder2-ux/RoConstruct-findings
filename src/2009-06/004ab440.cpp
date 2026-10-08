// from server: 100% by auto
// roc 2009-06 004ab440  unit: G3D::Win32Window  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ab440
//
// 004ab440  56                   push esi
// 004ab441  57                   push edi
// 004ab442  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004ab446  8b07                 mov eax, dword ptr [edi]
// 004ab448  8bf1                 mov esi, ecx
// 004ab44a  8d4f04               lea ecx, [edi + 4]
// 004ab44d  51                   push ecx
// 004ab44e  8d4e04               lea ecx, [esi + 4]
// 004ab451  8906                 mov dword ptr [esi], eax
// 004ab453  ff1564e48900         call dword ptr [0x89e464]
// 004ab459  8a5720               mov dl, byte ptr [edi + 0x20]
// 004ab45c  885620               mov byte ptr [esi + 0x20], dl
// 004ab45f  8b4724               mov eax, dword ptr [edi + 0x24]
// 004ab462  894624               mov dword ptr [esi + 0x24], eax
// 004ab465  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 004ab468  894e28               mov dword ptr [esi + 0x28], ecx
// 004ab46b  83c72c               add edi, 0x2c
// 004ab46e  57                   push edi
// 004ab46f  8d4e2c               lea ecx, [esi + 0x2c]
// 004ab472  e8a9f7ffff           call 0x4aac20
// 004ab477  5f                   pop edi
// 004ab478  8bc6                 mov eax, esi
// 004ab47a  5e                   pop esi
// 004ab47b  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??4JoystickInfo@_DirectInput@_internal@G3D@@QAEAAU0123@ABU0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
