// roc 2009-12 004d6510  unit: G3D::GWindow  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d6510
//
// 004d6510  56                   push esi
// 004d6511  8bf1                 mov esi, ecx
// 004d6513  8b4610               mov eax, dword ptr [esi + 0x10]
// 004d6516  57                   push edi
// 004d6517  8d78ff               lea edi, [eax - 1]
// 004d651a  85c0                 test eax, eax
// 004d651c  7e17                 jle 0x4d6535
// 004d651e  85ff                 test edi, edi
// 004d6520  7f0f                 jg 0x4d6531
// 004d6522  8b06                 mov eax, dword ptr [esi]
// 004d6524  8b5064               mov edx, dword ptr [eax + 0x64]
// 004d6527  6a00                 push 0
// 004d6529  ffd2                 call edx
// 004d652b  897e10               mov dword ptr [esi + 0x10], edi
// 004d652e  5f                   pop edi
// 004d652f  5e                   pop esi
// 004d6530  c3                   ret 
// 004d6531  85c0                 test eax, eax
// 004d6533  7f0d                 jg 0x4d6542
// 004d6535  85ff                 test edi, edi
// 004d6537  7e09                 jle 0x4d6542
// 004d6539  8b06                 mov eax, dword ptr [esi]
// 004d653b  8b5064               mov edx, dword ptr [eax + 0x64]
// 004d653e  6a01                 push 1
// 004d6540  ffd2                 call edx
// 004d6542  897e10               mov dword ptr [esi + 0x10], edi
// 004d6545  5f                   pop edi
// 004d6546  5e                   pop esi
// 004d6547  c3                   ret 
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?decInputCaptureCount@GWindow@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
