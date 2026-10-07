// roc 2007-08 0047c320  unit: G3D::GWindow  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047c320
//
// 0047c320  56                   push esi
// 0047c321  8bf1                 mov esi, ecx
// 0047c323  8b4610               mov eax, dword ptr [esi + 0x10]
// 0047c326  85c0                 test eax, eax
// 0047c328  57                   push edi
// 0047c329  8d7801               lea edi, [eax + 1]
// 0047c32c  7e17                 jle 0x47c345
// 0047c32e  85ff                 test edi, edi
// 0047c330  7f0f                 jg 0x47c341
// 0047c332  8b06                 mov eax, dword ptr [esi]
// 0047c334  8b5064               mov edx, dword ptr [eax + 0x64]
// 0047c337  6a00                 push 0
// 0047c339  ffd2                 call edx
// 0047c33b  897e10               mov dword ptr [esi + 0x10], edi
// 0047c33e  5f                   pop edi
// 0047c33f  5e                   pop esi
// 0047c340  c3                   ret 
// 0047c341  85c0                 test eax, eax
// 0047c343  7f0d                 jg 0x47c352
// 0047c345  85ff                 test edi, edi
// 0047c347  7e09                 jle 0x47c352
// 0047c349  8b06                 mov eax, dword ptr [esi]
// 0047c34b  8b5064               mov edx, dword ptr [eax + 0x64]
// 0047c34e  6a01                 push 1
// 0047c350  ffd2                 call edx
// 0047c352  897e10               mov dword ptr [esi + 0x10], edi
// 0047c355  5f                   pop edi
// 0047c356  5e                   pop esi
// 0047c357  c3                   ret 
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?incInputCaptureCount@GWindow@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
