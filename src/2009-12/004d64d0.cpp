// roc 2009-12 004d64d0  unit: G3D::GWindow  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d64d0
//
// 004d64d0  56                   push esi
// 004d64d1  8bf1                 mov esi, ecx
// 004d64d3  8b4610               mov eax, dword ptr [esi + 0x10]
// 004d64d6  57                   push edi
// 004d64d7  8d7801               lea edi, [eax + 1]
// 004d64da  85c0                 test eax, eax
// 004d64dc  7e17                 jle 0x4d64f5
// 004d64de  85ff                 test edi, edi
// 004d64e0  7f0f                 jg 0x4d64f1
// 004d64e2  8b06                 mov eax, dword ptr [esi]
// 004d64e4  8b5064               mov edx, dword ptr [eax + 0x64]
// 004d64e7  6a00                 push 0
// 004d64e9  ffd2                 call edx
// 004d64eb  897e10               mov dword ptr [esi + 0x10], edi
// 004d64ee  5f                   pop edi
// 004d64ef  5e                   pop esi
// 004d64f0  c3                   ret 
// 004d64f1  85c0                 test eax, eax
// 004d64f3  7f0d                 jg 0x4d6502
// 004d64f5  85ff                 test edi, edi
// 004d64f7  7e09                 jle 0x4d6502
// 004d64f9  8b06                 mov eax, dword ptr [esi]
// 004d64fb  8b5064               mov edx, dword ptr [eax + 0x64]
// 004d64fe  6a01                 push 1
// 004d6500  ffd2                 call edx
// 004d6502  897e10               mov dword ptr [esi + 0x10], edi
// 004d6505  5f                   pop edi
// 004d6506  5e                   pop esi
// 004d6507  c3                   ret 
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?incInputCaptureCount@GWindow@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
