// from server: 100% by auto
// roc 2009-06 004a99a0  unit: G3D::GWindow  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a99a0
//
// 004a99a0  56                   push esi
// 004a99a1  8bf1                 mov esi, ecx
// 004a99a3  8b4610               mov eax, dword ptr [esi + 0x10]
// 004a99a6  57                   push edi
// 004a99a7  8d7801               lea edi, [eax + 1]
// 004a99aa  85c0                 test eax, eax
// 004a99ac  7e17                 jle 0x4a99c5
// 004a99ae  85ff                 test edi, edi
// 004a99b0  7f0f                 jg 0x4a99c1
// 004a99b2  8b06                 mov eax, dword ptr [esi]
// 004a99b4  8b5064               mov edx, dword ptr [eax + 0x64]
// 004a99b7  6a00                 push 0
// 004a99b9  ffd2                 call edx
// 004a99bb  897e10               mov dword ptr [esi + 0x10], edi
// 004a99be  5f                   pop edi
// 004a99bf  5e                   pop esi
// 004a99c0  c3                   ret 
// 004a99c1  85c0                 test eax, eax
// 004a99c3  7f0d                 jg 0x4a99d2
// 004a99c5  85ff                 test edi, edi
// 004a99c7  7e09                 jle 0x4a99d2
// 004a99c9  8b06                 mov eax, dword ptr [esi]
// 004a99cb  8b5064               mov edx, dword ptr [eax + 0x64]
// 004a99ce  6a01                 push 1
// 004a99d0  ffd2                 call edx
// 004a99d2  897e10               mov dword ptr [esi + 0x10], edi
// 004a99d5  5f                   pop edi
// 004a99d6  5e                   pop esi
// 004a99d7  c3                   ret 
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?incInputCaptureCount@GWindow@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
