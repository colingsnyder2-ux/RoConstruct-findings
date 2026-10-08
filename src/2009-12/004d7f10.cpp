// roc 2009-12 004d7f10  unit: G3D::Win32Window  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d7f10
//
// 004d7f10  56                   push esi
// 004d7f11  57                   push edi
// 004d7f12  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004d7f16  8b07                 mov eax, dword ptr [edi]
// 004d7f18  8bf1                 mov esi, ecx
// 004d7f1a  8d4f04               lea ecx, [edi + 4]
// 004d7f1d  51                   push ecx
// 004d7f1e  8d4e04               lea ecx, [esi + 4]
// 004d7f21  8906                 mov dword ptr [esi], eax
// 004d7f23  ff159cb69800         call dword ptr [0x98b69c]
// 004d7f29  8a5720               mov dl, byte ptr [edi + 0x20]
// 004d7f2c  885620               mov byte ptr [esi + 0x20], dl
// 004d7f2f  8b4724               mov eax, dword ptr [edi + 0x24]
// 004d7f32  894624               mov dword ptr [esi + 0x24], eax
// 004d7f35  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 004d7f38  894e28               mov dword ptr [esi + 0x28], ecx
// 004d7f3b  83c72c               add edi, 0x2c
// 004d7f3e  57                   push edi
// 004d7f3f  8d4e2c               lea ecx, [esi + 0x2c]
// 004d7f42  e8a9f7ffff           call 0x4d76f0
// 004d7f47  5f                   pop edi
// 004d7f48  8bc6                 mov eax, esi
// 004d7f4a  5e                   pop esi
// 004d7f4b  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??4JoystickInfo@_DirectInput@_internal@G3D@@QAEAAU0123@ABU0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
