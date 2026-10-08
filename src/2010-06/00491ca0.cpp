// from server: 100% by auto
// roc 2010-06 00491ca0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00491ca0
//
// 00491ca0  83ec10               sub esp, 0x10
// 00491ca3  8b442414             mov eax, dword ptr [esp + 0x14]
// 00491ca7  f30f1000             movss xmm0, dword ptr [eax]
// 00491cab  f30f110424           movss dword ptr [esp], xmm0
// 00491cb0  f30f104004           movss xmm0, dword ptr [eax + 4]
// 00491cb5  f30f11442404         movss dword ptr [esp + 4], xmm0
// 00491cbb  f30f104008           movss xmm0, dword ptr [eax + 8]
// 00491cc0  8d0424               lea eax, [esp]
// 00491cc3  f30f11442408         movss dword ptr [esp + 8], xmm0
// 00491cc9  f30f100524f6a100     movss xmm0, dword ptr [0xa1f624]
// 00491cd1  50                   push eax
// 00491cd2  f30f11442410         movss dword ptr [esp + 0x10], xmm0
// 00491cd8  e8e3feffff           call 0x491bc0
// 00491cdd  83c410               add esp, 0x10
// 00491ce0  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setAmbientLightColor@RenderDevice@G3D@@QAEXABVColor3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
