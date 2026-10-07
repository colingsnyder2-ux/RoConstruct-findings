// roc 2010-06 0048b520  unit: G3D::Win32Window  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048b520
//
// 0048b520  83ec10               sub esp, 0x10
// 0048b523  56                   push esi
// 0048b524  57                   push edi
// 0048b525  8bf1                 mov esi, ecx
// 0048b527  f30f2a462c           cvtsi2ss xmm0, dword ptr [esi + 0x2c]
// 0048b52c  8b3e                 mov edi, dword ptr [esi]
// 0048b52e  83ec10               sub esp, 0x10
// 0048b531  f30f1144240c         movss dword ptr [esp + 0xc], xmm0
// 0048b537  f30f2a4628           cvtsi2ss xmm0, dword ptr [esi + 0x28]
// 0048b53c  f30f11442408         movss dword ptr [esp + 8], xmm0
// 0048b542  f30f2a442430         cvtsi2ss xmm0, dword ptr [esp + 0x30]
// 0048b548  f30f11442404         movss dword ptr [esp + 4], xmm0
// 0048b54e  f30f2a44242c         cvtsi2ss xmm0, dword ptr [esp + 0x2c]
// 0048b554  8d442418             lea eax, [esp + 0x18]
// 0048b558  f30f110424           movss dword ptr [esp], xmm0
// 0048b55d  50                   push eax
// 0048b55e  e87d9bffff           call 0x4850e0
// 0048b563  8b5710               mov edx, dword ptr [edi + 0x10]
// 0048b566  83c414               add esp, 0x14
// 0048b569  50                   push eax
// 0048b56a  8bce                 mov ecx, esi
// 0048b56c  ffd2                 call edx
// 0048b56e  5f                   pop edi
// 0048b56f  5e                   pop esi
// 0048b570  83c410               add esp, 0x10
// 0048b573  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?setPosition@Win32Window@G3D@@UAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
