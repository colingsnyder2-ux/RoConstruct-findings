// roc 2009-12 004cc130  unit: G3D::VARArea  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cc130
//
// 004cc130  83ec10               sub esp, 0x10
// 004cc133  8b442418             mov eax, dword ptr [esp + 0x18]
// 004cc137  f30f1000             movss xmm0, dword ptr [eax]
// 004cc13b  f30f110424           movss dword ptr [esp], xmm0
// 004cc140  f30f104004           movss xmm0, dword ptr [eax + 4]
// 004cc145  f30f11442404         movss dword ptr [esp + 4], xmm0
// 004cc14b  f30f104008           movss xmm0, dword ptr [eax + 8]
// 004cc150  56                   push esi
// 004cc151  8b742418             mov esi, dword ptr [esp + 0x18]
// 004cc155  8d442404             lea eax, [esp + 4]
// 004cc159  50                   push eax
// 004cc15a  f30f11442410         movss dword ptr [esp + 0x10], xmm0
// 004cc160  f30f100518ea9a00     movss xmm0, dword ptr [0x9aea18]
// 004cc168  56                   push esi
// 004cc169  f30f11442418         movss dword ptr [esp + 0x18], xmm0
// 004cc16f  e82cde0000           call 0x4d9fa0
// 004cc174  83c408               add esp, 8
// 004cc177  8bc6                 mov eax, esi
// 004cc179  5e                   pop esi
// 004cc17a  83c410               add esp, 0x10
// 004cc17d  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?project@RenderDevice@G3D@@QBE?AVVector4@2@ABVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
