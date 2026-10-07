// roc 2010-06 0055fe40  unit: G3D::Line  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055fe40
//
// 0055fe40  b801000000           mov eax, 1
// 0055fe45  84052891c000         test byte ptr [0xc09128], al
// 0055fe4b  7529                 jne 0x55fe76
// 0055fe4d  0f57c0               xorps xmm0, xmm0
// 0055fe50  f30f100d24f6a100     movss xmm1, dword ptr [0xa1f624]
// 0055fe58  09052891c000         or dword ptr [0xc09128], eax
// 0055fe5e  f30f11051c91c000     movss dword ptr [0xc0911c], xmm0
// 0055fe66  f30f110d2091c000     movss dword ptr [0xc09120], xmm1
// 0055fe6e  f30f11052491c000     movss dword ptr [0xc09124], xmm0
// 0055fe76  f30f10051c91c000     movss xmm0, dword ptr [0xc0911c]
// 0055fe7e  83ec0c               sub esp, 0xc
// 0055fe81  8bc4                 mov eax, esp
// 0055fe83  f30f1100             movss dword ptr [eax], xmm0
// 0055fe87  f30f10052091c000     movss xmm0, dword ptr [0xc09120]
// 0055fe8f  f30f114004           movss dword ptr [eax + 4], xmm0
// 0055fe94  f30f10052491c000     movss xmm0, dword ptr [0xc09124]
// 0055fe9c  f30f114008           movss dword ptr [eax + 8], xmm0
// 0055fea1  8b442410             mov eax, dword ptr [esp + 0x10]
// 0055fea5  50                   push eax
// 0055fea6  e825fcffff           call 0x55fad0
// 0055feab  c20400               ret 4
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ?lookAt@CoordinateFrame@G3D@@QAEXABVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
