// roc 2008-06 0047f900  unit: G3D::GWindow  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047f900
//
// 0047f900  56                   push esi
// 0047f901  8bf1                 mov esi, ecx
// 0047f903  8b4610               mov eax, dword ptr [esi + 0x10]
// 0047f906  57                   push edi
// 0047f907  8d7801               lea edi, [eax + 1]
// 0047f90a  85c0                 test eax, eax
// 0047f90c  7e17                 jle 0x47f925
// 0047f90e  85ff                 test edi, edi
// 0047f910  7f0f                 jg 0x47f921
// 0047f912  8b06                 mov eax, dword ptr [esi]
// 0047f914  8b5064               mov edx, dword ptr [eax + 0x64]
// 0047f917  6a00                 push 0
// 0047f919  ffd2                 call edx
// 0047f91b  897e10               mov dword ptr [esi + 0x10], edi
// 0047f91e  5f                   pop edi
// 0047f91f  5e                   pop esi
// 0047f920  c3                   ret 
// 0047f921  85c0                 test eax, eax
// 0047f923  7f0d                 jg 0x47f932
// 0047f925  85ff                 test edi, edi
// 0047f927  7e09                 jle 0x47f932
// 0047f929  8b06                 mov eax, dword ptr [esi]
// 0047f92b  8b5064               mov edx, dword ptr [eax + 0x64]
// 0047f92e  6a01                 push 1
// 0047f930  ffd2                 call edx
// 0047f932  897e10               mov dword ptr [esi + 0x10], edi
// 0047f935  5f                   pop edi
// 0047f936  5e                   pop esi
// 0047f937  c3                   ret 
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?incInputCaptureCount@GWindow@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
