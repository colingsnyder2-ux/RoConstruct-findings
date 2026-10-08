// roc 2009-12 004c7fa0  unit: G3D::Texture  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c7fa0
//
// 004c7fa0  f30f2a4168           cvtsi2ss xmm0, dword ptr [ecx + 0x68]
// 004c7fa5  d9ee                 fldz 
// 004c7fa7  56                   push esi
// 004c7fa8  8b742408             mov esi, dword ptr [esp + 8]
// 004c7fac  83ec10               sub esp, 0x10
// 004c7faf  f30f1144240c         movss dword ptr [esp + 0xc], xmm0
// 004c7fb5  f30f2a4164           cvtsi2ss xmm0, dword ptr [ecx + 0x64]
// 004c7fba  f30f11442408         movss dword ptr [esp + 8], xmm0
// 004c7fc0  d9542404             fst dword ptr [esp + 4]
// 004c7fc4  d91c24               fstp dword ptr [esp]
// 004c7fc7  56                   push esi
// 004c7fc8  e853b1f9ff           call 0x463120
// 004c7fcd  83c414               add esp, 0x14
// 004c7fd0  8bc6                 mov eax, esi
// 004c7fd2  5e                   pop esi
// 004c7fd3  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?rect2DBounds@Texture@G3D@@QBE?AVRect2D@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
