// roc 2009-12 004d9390  unit: G3D::Win32Window  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d9390
//
// 004d9390  83ec10               sub esp, 0x10
// 004d9393  56                   push esi
// 004d9394  57                   push edi
// 004d9395  8bf1                 mov esi, ecx
// 004d9397  f30f2a462c           cvtsi2ss xmm0, dword ptr [esi + 0x2c]
// 004d939c  8b3e                 mov edi, dword ptr [esi]
// 004d939e  83ec10               sub esp, 0x10
// 004d93a1  f30f1144240c         movss dword ptr [esp + 0xc], xmm0
// 004d93a7  f30f2a4628           cvtsi2ss xmm0, dword ptr [esi + 0x28]
// 004d93ac  f30f11442408         movss dword ptr [esp + 8], xmm0
// 004d93b2  f30f2a442430         cvtsi2ss xmm0, dword ptr [esp + 0x30]
// 004d93b8  f30f11442404         movss dword ptr [esp + 4], xmm0
// 004d93be  f30f2a44242c         cvtsi2ss xmm0, dword ptr [esp + 0x2c]
// 004d93c4  8d442418             lea eax, [esp + 0x18]
// 004d93c8  f30f110424           movss dword ptr [esp], xmm0
// 004d93cd  50                   push eax
// 004d93ce  e84d9df8ff           call 0x463120
// 004d93d3  8b5710               mov edx, dword ptr [edi + 0x10]
// 004d93d6  83c414               add esp, 0x14
// 004d93d9  50                   push eax
// 004d93da  8bce                 mov ecx, esi
// 004d93dc  ffd2                 call edx
// 004d93de  5f                   pop edi
// 004d93df  5e                   pop esi
// 004d93e0  83c410               add esp, 0x10
// 004d93e3  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?setPosition@Win32Window@G3D@@UAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
