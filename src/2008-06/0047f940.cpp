// from server: 100% by auto
// roc 2008-06 0047f940  unit: G3D::GWindow  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047f940
//
// 0047f940  56                   push esi
// 0047f941  8bf1                 mov esi, ecx
// 0047f943  8b4610               mov eax, dword ptr [esi + 0x10]
// 0047f946  57                   push edi
// 0047f947  8d78ff               lea edi, [eax - 1]
// 0047f94a  85c0                 test eax, eax
// 0047f94c  7e17                 jle 0x47f965
// 0047f94e  85ff                 test edi, edi
// 0047f950  7f0f                 jg 0x47f961
// 0047f952  8b06                 mov eax, dword ptr [esi]
// 0047f954  8b5064               mov edx, dword ptr [eax + 0x64]
// 0047f957  6a00                 push 0
// 0047f959  ffd2                 call edx
// 0047f95b  897e10               mov dword ptr [esi + 0x10], edi
// 0047f95e  5f                   pop edi
// 0047f95f  5e                   pop esi
// 0047f960  c3                   ret 
// 0047f961  85c0                 test eax, eax
// 0047f963  7f0d                 jg 0x47f972
// 0047f965  85ff                 test edi, edi
// 0047f967  7e09                 jle 0x47f972
// 0047f969  8b06                 mov eax, dword ptr [esi]
// 0047f96b  8b5064               mov edx, dword ptr [eax + 0x64]
// 0047f96e  6a01                 push 1
// 0047f970  ffd2                 call edx
// 0047f972  897e10               mov dword ptr [esi + 0x10], edi
// 0047f975  5f                   pop edi
// 0047f976  5e                   pop esi
// 0047f977  c3                   ret 
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?decInputCaptureCount@GWindow@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
