// roc 2009-12 004d8d50  unit: G3D::Win32Window  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d8d50
//
// 004d8d50  6aff                 push -1
// 004d8d52  687c3c9300           push 0x933c7c
// 004d8d57  64a100000000         mov eax, dword ptr fs:[0]
// 004d8d5d  50                   push eax
// 004d8d5e  64892500000000       mov dword ptr fs:[0], esp
// 004d8d65  51                   push ecx
// 004d8d66  56                   push esi
// 004d8d67  57                   push edi
// 004d8d68  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004d8d6c  8b07                 mov eax, dword ptr [edi]
// 004d8d6e  8bf1                 mov esi, ecx
// 004d8d70  8d4f04               lea ecx, [edi + 4]
// 004d8d73  51                   push ecx
// 004d8d74  8d4e04               lea ecx, [esi + 4]
// 004d8d77  8974240c             mov dword ptr [esp + 0xc], esi
// 004d8d7b  8906                 mov dword ptr [esi], eax
// 004d8d7d  ff15f0b69800         call dword ptr [0x98b6f0]
// 004d8d83  8a5720               mov dl, byte ptr [edi + 0x20]
// 004d8d86  885620               mov byte ptr [esi + 0x20], dl
// 004d8d89  8b4724               mov eax, dword ptr [edi + 0x24]
// 004d8d8c  894624               mov dword ptr [esi + 0x24], eax
// 004d8d8f  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 004d8d92  83c72c               add edi, 0x2c
// 004d8d95  894e28               mov dword ptr [esi + 0x28], ecx
// 004d8d98  57                   push edi
// 004d8d99  8d4e2c               lea ecx, [esi + 0x2c]
// 004d8d9c  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004d8da4  e887e9ffff           call 0x4d7730
// 004d8da9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d8dad  5f                   pop edi
// 004d8dae  8bc6                 mov eax, esi
// 004d8db0  5e                   pop esi
// 004d8db1  64890d00000000       mov dword ptr fs:[0], ecx
// 004d8db8  83c410               add esp, 0x10
// 004d8dbb  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??0JoystickInfo@_DirectInput@_internal@G3D@@QAE@ABU0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
