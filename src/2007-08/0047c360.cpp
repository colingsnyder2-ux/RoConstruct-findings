// from server: 100% by auto
// roc 2007-08 0047c360  unit: G3D::GWindow  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047c360
//
// 0047c360  56                   push esi
// 0047c361  8bf1                 mov esi, ecx
// 0047c363  8b4610               mov eax, dword ptr [esi + 0x10]
// 0047c366  85c0                 test eax, eax
// 0047c368  57                   push edi
// 0047c369  8d78ff               lea edi, [eax - 1]
// 0047c36c  7e17                 jle 0x47c385
// 0047c36e  85ff                 test edi, edi
// 0047c370  7f0f                 jg 0x47c381
// 0047c372  8b06                 mov eax, dword ptr [esi]
// 0047c374  8b5064               mov edx, dword ptr [eax + 0x64]
// 0047c377  6a00                 push 0
// 0047c379  ffd2                 call edx
// 0047c37b  897e10               mov dword ptr [esi + 0x10], edi
// 0047c37e  5f                   pop edi
// 0047c37f  5e                   pop esi
// 0047c380  c3                   ret 
// 0047c381  85c0                 test eax, eax
// 0047c383  7f0d                 jg 0x47c392
// 0047c385  85ff                 test edi, edi
// 0047c387  7e09                 jle 0x47c392
// 0047c389  8b06                 mov eax, dword ptr [esi]
// 0047c38b  8b5064               mov edx, dword ptr [eax + 0x64]
// 0047c38e  6a01                 push 1
// 0047c390  ffd2                 call edx
// 0047c392  897e10               mov dword ptr [esi + 0x10], edi
// 0047c395  5f                   pop edi
// 0047c396  5e                   pop esi
// 0047c397  c3                   ret 
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?decInputCaptureCount@GWindow@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
