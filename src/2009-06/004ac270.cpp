// roc 2009-06 004ac270  unit: G3D::Win32Window  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ac270
//
// 004ac270  6aff                 push -1
// 004ac272  683c188700           push 0x87183c
// 004ac277  64a100000000         mov eax, dword ptr fs:[0]
// 004ac27d  50                   push eax
// 004ac27e  64892500000000       mov dword ptr fs:[0], esp
// 004ac285  51                   push ecx
// 004ac286  56                   push esi
// 004ac287  57                   push edi
// 004ac288  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004ac28c  8b07                 mov eax, dword ptr [edi]
// 004ac28e  8bf1                 mov esi, ecx
// 004ac290  8d4f04               lea ecx, [edi + 4]
// 004ac293  51                   push ecx
// 004ac294  8d4e04               lea ecx, [esi + 4]
// 004ac297  8974240c             mov dword ptr [esp + 0xc], esi
// 004ac29b  8906                 mov dword ptr [esi], eax
// 004ac29d  ff15b8e48900         call dword ptr [0x89e4b8]
// 004ac2a3  8a5720               mov dl, byte ptr [edi + 0x20]
// 004ac2a6  885620               mov byte ptr [esi + 0x20], dl
// 004ac2a9  8b4724               mov eax, dword ptr [edi + 0x24]
// 004ac2ac  894624               mov dword ptr [esi + 0x24], eax
// 004ac2af  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 004ac2b2  83c72c               add edi, 0x2c
// 004ac2b5  894e28               mov dword ptr [esi + 0x28], ecx
// 004ac2b8  57                   push edi
// 004ac2b9  8d4e2c               lea ecx, [esi + 0x2c]
// 004ac2bc  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004ac2c4  e897e9ffff           call 0x4aac60
// 004ac2c9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004ac2cd  5f                   pop edi
// 004ac2ce  8bc6                 mov eax, esi
// 004ac2d0  5e                   pop esi
// 004ac2d1  64890d00000000       mov dword ptr fs:[0], ecx
// 004ac2d8  83c410               add esp, 0x10
// 004ac2db  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??0JoystickInfo@_DirectInput@_internal@G3D@@QAE@ABU0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
