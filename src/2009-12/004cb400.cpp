// roc 2009-12 004cb400  unit: G3D::VARArea  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cb400
//
// 004cb400  83ec10               sub esp, 0x10
// 004cb403  8b442414             mov eax, dword ptr [esp + 0x14]
// 004cb407  f30f1000             movss xmm0, dword ptr [eax]
// 004cb40b  f30f110424           movss dword ptr [esp], xmm0
// 004cb410  f30f104004           movss xmm0, dword ptr [eax + 4]
// 004cb415  f30f11442404         movss dword ptr [esp + 4], xmm0
// 004cb41b  f30f104008           movss xmm0, dword ptr [eax + 8]
// 004cb420  8d0424               lea eax, [esp]
// 004cb423  f30f11442408         movss dword ptr [esp + 8], xmm0
// 004cb429  f30f100518ea9a00     movss xmm0, dword ptr [0x9aea18]
// 004cb431  50                   push eax
// 004cb432  f30f11442410         movss dword ptr [esp + 0x10], xmm0
// 004cb438  e8e3feffff           call 0x4cb320
// 004cb43d  83c410               add esp, 0x10
// 004cb440  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setAmbientLightColor@RenderDevice@G3D@@QAEXABVColor3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
