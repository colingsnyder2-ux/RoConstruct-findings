// roc 2008-06 00482360  unit: G3D::Win32Window  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00482360
//
// 00482360  6aff                 push -1
// 00482362  689c6a7c00           push 0x7c6a9c
// 00482367  64a100000000         mov eax, dword ptr fs:[0]
// 0048236d  50                   push eax
// 0048236e  64892500000000       mov dword ptr fs:[0], esp
// 00482375  51                   push ecx
// 00482376  56                   push esi
// 00482377  57                   push edi
// 00482378  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0048237c  8b07                 mov eax, dword ptr [edi]
// 0048237e  8bf1                 mov esi, ecx
// 00482380  8d4f04               lea ecx, [edi + 4]
// 00482383  51                   push ecx
// 00482384  8d4e04               lea ecx, [esi + 4]
// 00482387  8974240c             mov dword ptr [esp + 0xc], esi
// 0048238b  8906                 mov dword ptr [esi], eax
// 0048238d  ff155c248000         call dword ptr [0x80245c]
// 00482393  8a5720               mov dl, byte ptr [edi + 0x20]
// 00482396  885620               mov byte ptr [esi + 0x20], dl
// 00482399  8b4724               mov eax, dword ptr [edi + 0x24]
// 0048239c  894624               mov dword ptr [esi + 0x24], eax
// 0048239f  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 004823a2  83c72c               add edi, 0x2c
// 004823a5  894e28               mov dword ptr [esi + 0x28], ecx
// 004823a8  57                   push edi
// 004823a9  8d4e2c               lea ecx, [esi + 0x2c]
// 004823ac  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004823b4  e887e9ffff           call 0x480d40
// 004823b9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004823bd  5f                   pop edi
// 004823be  8bc6                 mov eax, esi
// 004823c0  5e                   pop esi
// 004823c1  64890d00000000       mov dword ptr fs:[0], ecx
// 004823c8  83c410               add esp, 0x10
// 004823cb  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??0JoystickInfo@_DirectInput@_internal@G3D@@QAE@ABU0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
