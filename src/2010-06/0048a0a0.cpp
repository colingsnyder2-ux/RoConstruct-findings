// roc 2010-06 0048a0a0  unit: G3D::Win32Window  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048a0a0
//
// 0048a0a0  56                   push esi
// 0048a0a1  57                   push edi
// 0048a0a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0048a0a6  8b07                 mov eax, dword ptr [edi]
// 0048a0a8  8bf1                 mov esi, ecx
// 0048a0aa  8d4f04               lea ecx, [edi + 4]
// 0048a0ad  51                   push ecx
// 0048a0ae  8d4e04               lea ecx, [esi + 4]
// 0048a0b1  8906                 mov dword ptr [esi], eax
// 0048a0b3  ff1568a49e00         call dword ptr [0x9ea468]
// 0048a0b9  8a5720               mov dl, byte ptr [edi + 0x20]
// 0048a0bc  885620               mov byte ptr [esi + 0x20], dl
// 0048a0bf  8b4724               mov eax, dword ptr [edi + 0x24]
// 0048a0c2  894624               mov dword ptr [esi + 0x24], eax
// 0048a0c5  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 0048a0c8  894e28               mov dword ptr [esi + 0x28], ecx
// 0048a0cb  83c72c               add edi, 0x2c
// 0048a0ce  57                   push edi
// 0048a0cf  8d4e2c               lea ecx, [esi + 0x2c]
// 0048a0d2  e8a9f7ffff           call 0x489880
// 0048a0d7  5f                   pop edi
// 0048a0d8  8bc6                 mov eax, esi
// 0048a0da  5e                   pop esi
// 0048a0db  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??4JoystickInfo@_DirectInput@_internal@G3D@@QAEAAU0123@ABU0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
