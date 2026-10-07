// roc 2010-06 00492c00  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00492c00
//
// 00492c00  83ec10               sub esp, 0x10
// 00492c03  8b442418             mov eax, dword ptr [esp + 0x18]
// 00492c07  f30f1000             movss xmm0, dword ptr [eax]
// 00492c0b  f30f110424           movss dword ptr [esp], xmm0
// 00492c10  f30f104004           movss xmm0, dword ptr [eax + 4]
// 00492c15  f30f11442404         movss dword ptr [esp + 4], xmm0
// 00492c1b  f30f104008           movss xmm0, dword ptr [eax + 8]
// 00492c20  56                   push esi
// 00492c21  8b742418             mov esi, dword ptr [esp + 0x18]
// 00492c25  8d442404             lea eax, [esp + 4]
// 00492c29  50                   push eax
// 00492c2a  f30f11442410         movss dword ptr [esp + 0x10], xmm0
// 00492c30  f30f100524f6a100     movss xmm0, dword ptr [0xa1f624]
// 00492c38  56                   push esi
// 00492c39  f30f11442418         movss dword ptr [esp + 0x18], xmm0
// 00492c3f  e84cc1ffff           call 0x48ed90
// 00492c44  83c408               add esp, 8
// 00492c47  8bc6                 mov eax, esi
// 00492c49  5e                   pop esi
// 00492c4a  83c410               add esp, 0x10
// 00492c4d  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?project@RenderDevice@G3D@@QBE?AVVector4@2@ABVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
