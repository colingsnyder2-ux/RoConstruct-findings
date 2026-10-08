// roc 2007-03 0047c3b0  unit: seg_00470000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047c3b0
//
// 0047c3b0  56                   push esi
// 0047c3b1  57                   push edi
// 0047c3b2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0047c3b6  8b07                 mov eax, dword ptr [edi]
// 0047c3b8  8bf1                 mov esi, ecx
// 0047c3ba  8d4f04               lea ecx, [edi + 4]
// 0047c3bd  51                   push ecx
// 0047c3be  8d4e04               lea ecx, [esi + 4]
// 0047c3c1  8906                 mov dword ptr [esi], eax
// 0047c3c3  ff154ce77700         call dword ptr [0x77e74c]
// 0047c3c9  8a5720               mov dl, byte ptr [edi + 0x20]
// 0047c3cc  885620               mov byte ptr [esi + 0x20], dl
// 0047c3cf  8b4724               mov eax, dword ptr [edi + 0x24]
// 0047c3d2  894624               mov dword ptr [esi + 0x24], eax
// 0047c3d5  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 0047c3d8  894e28               mov dword ptr [esi + 0x28], ecx
// 0047c3db  83c72c               add edi, 0x2c
// 0047c3de  57                   push edi
// 0047c3df  8d4e2c               lea ecx, [esi + 0x2c]
// 0047c3e2  e859f7ffff           call 0x47bb40
// 0047c3e7  5f                   pop edi
// 0047c3e8  8bc6                 mov eax, esi
// 0047c3ea  5e                   pop esi
// 0047c3eb  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\Win32Window.cpp (function ??4JoystickInfo@_DirectInput@_internal@G3D@@QAEAAU0123@ABU0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Win32Window.cpp
