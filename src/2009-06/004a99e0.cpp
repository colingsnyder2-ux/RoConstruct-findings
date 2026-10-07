// roc 2009-06 004a99e0  unit: G3D::GWindow  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a99e0
//
// 004a99e0  56                   push esi
// 004a99e1  8bf1                 mov esi, ecx
// 004a99e3  8b4610               mov eax, dword ptr [esi + 0x10]
// 004a99e6  57                   push edi
// 004a99e7  8d78ff               lea edi, [eax - 1]
// 004a99ea  85c0                 test eax, eax
// 004a99ec  7e17                 jle 0x4a9a05
// 004a99ee  85ff                 test edi, edi
// 004a99f0  7f0f                 jg 0x4a9a01
// 004a99f2  8b06                 mov eax, dword ptr [esi]
// 004a99f4  8b5064               mov edx, dword ptr [eax + 0x64]
// 004a99f7  6a00                 push 0
// 004a99f9  ffd2                 call edx
// 004a99fb  897e10               mov dword ptr [esi + 0x10], edi
// 004a99fe  5f                   pop edi
// 004a99ff  5e                   pop esi
// 004a9a00  c3                   ret 
// 004a9a01  85c0                 test eax, eax
// 004a9a03  7f0d                 jg 0x4a9a12
// 004a9a05  85ff                 test edi, edi
// 004a9a07  7e09                 jle 0x4a9a12
// 004a9a09  8b06                 mov eax, dword ptr [esi]
// 004a9a0b  8b5064               mov edx, dword ptr [eax + 0x64]
// 004a9a0e  6a01                 push 1
// 004a9a10  ffd2                 call edx
// 004a9a12  897e10               mov dword ptr [esi + 0x10], edi
// 004a9a15  5f                   pop edi
// 004a9a16  5e                   pop esi
// 004a9a17  c3                   ret 
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?decInputCaptureCount@GWindow@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
