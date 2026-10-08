// from server: 100% by auto
// roc 2010-06 0048aee0  unit: G3D::Win32Window  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048aee0
//
// 0048aee0  6aff                 push -1
// 0048aee2  68bc5f9800           push 0x985fbc
// 0048aee7  64a100000000         mov eax, dword ptr fs:[0]
// 0048aeed  50                   push eax
// 0048aeee  64892500000000       mov dword ptr fs:[0], esp
// 0048aef5  51                   push ecx
// 0048aef6  56                   push esi
// 0048aef7  57                   push edi
// 0048aef8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0048aefc  8b07                 mov eax, dword ptr [edi]
// 0048aefe  8bf1                 mov esi, ecx
// 0048af00  8d4f04               lea ecx, [edi + 4]
// 0048af03  51                   push ecx
// 0048af04  8d4e04               lea ecx, [esi + 4]
// 0048af07  8974240c             mov dword ptr [esp + 0xc], esi
// 0048af0b  8906                 mov dword ptr [esi], eax
// 0048af0d  ff150ca49e00         call dword ptr [0x9ea40c]
// 0048af13  8a5720               mov dl, byte ptr [edi + 0x20]
// 0048af16  885620               mov byte ptr [esi + 0x20], dl
// 0048af19  8b4724               mov eax, dword ptr [edi + 0x24]
// 0048af1c  894624               mov dword ptr [esi + 0x24], eax
// 0048af1f  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 0048af22  83c72c               add edi, 0x2c
// 0048af25  894e28               mov dword ptr [esi + 0x28], ecx
// 0048af28  57                   push edi
// 0048af29  8d4e2c               lea ecx, [esi + 0x2c]
// 0048af2c  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0048af34  e887e9ffff           call 0x4898c0
// 0048af39  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048af3d  5f                   pop edi
// 0048af3e  8bc6                 mov eax, esi
// 0048af40  5e                   pop esi
// 0048af41  64890d00000000       mov dword ptr fs:[0], ecx
// 0048af48  83c410               add esp, 0x10
// 0048af4b  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??0JoystickInfo@_DirectInput@_internal@G3D@@QAE@ABU0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
