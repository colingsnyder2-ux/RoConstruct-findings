// roc 2010-06 00485240  unit: G3D::Texture  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00485240
//
// 00485240  f30f2a4168           cvtsi2ss xmm0, dword ptr [ecx + 0x68]
// 00485245  d9ee                 fldz 
// 00485247  56                   push esi
// 00485248  8b742408             mov esi, dword ptr [esp + 8]
// 0048524c  83ec10               sub esp, 0x10
// 0048524f  f30f1144240c         movss dword ptr [esp + 0xc], xmm0
// 00485255  f30f2a4164           cvtsi2ss xmm0, dword ptr [ecx + 0x64]
// 0048525a  f30f11442408         movss dword ptr [esp + 8], xmm0
// 00485260  d9542404             fst dword ptr [esp + 4]
// 00485264  d91c24               fstp dword ptr [esp]
// 00485267  56                   push esi
// 00485268  e873feffff           call 0x4850e0
// 0048526d  83c414               add esp, 0x14
// 00485270  8bc6                 mov eax, esi
// 00485272  5e                   pop esi
// 00485273  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?rect2DBounds@Texture@G3D@@QBE?AVRect2D@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
