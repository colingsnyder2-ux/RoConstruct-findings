// from server: 100% by auto
// roc 2008-06 00481530  unit: G3D::Win32Window  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00481530
//
// 00481530  56                   push esi
// 00481531  57                   push edi
// 00481532  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00481536  8b07                 mov eax, dword ptr [edi]
// 00481538  8bf1                 mov esi, ecx
// 0048153a  8d4f04               lea ecx, [edi + 4]
// 0048153d  51                   push ecx
// 0048153e  8d4e04               lea ecx, [esi + 4]
// 00481541  8906                 mov dword ptr [esi], eax
// 00481543  ff150c248000         call dword ptr [0x80240c]
// 00481549  8a5720               mov dl, byte ptr [edi + 0x20]
// 0048154c  885620               mov byte ptr [esi + 0x20], dl
// 0048154f  8b4724               mov eax, dword ptr [edi + 0x24]
// 00481552  894624               mov dword ptr [esi + 0x24], eax
// 00481555  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 00481558  894e28               mov dword ptr [esi + 0x28], ecx
// 0048155b  83c72c               add edi, 0x2c
// 0048155e  57                   push edi
// 0048155f  8d4e2c               lea ecx, [esi + 0x2c]
// 00481562  e899f7ffff           call 0x480d00
// 00481567  5f                   pop edi
// 00481568  8bc6                 mov eax, esi
// 0048156a  5e                   pop esi
// 0048156b  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??4JoystickInfo@_DirectInput@_internal@G3D@@QAEAAU0123@ABU0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
