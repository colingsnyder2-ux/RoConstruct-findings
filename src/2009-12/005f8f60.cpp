// roc 2009-12 005f8f60  unit: G3D::LineSegment  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f8f60
//
// 005f8f60  b801000000           mov eax, 1
// 005f8f65  840544ccb700         test byte ptr [0xb7cc44], al
// 005f8f6b  7529                 jne 0x5f8f96
// 005f8f6d  0f57c0               xorps xmm0, xmm0
// 005f8f70  f30f100d18ea9a00     movss xmm1, dword ptr [0x9aea18]
// 005f8f78  090544ccb700         or dword ptr [0xb7cc44], eax
// 005f8f7e  f30f110538ccb700     movss dword ptr [0xb7cc38], xmm0
// 005f8f86  f30f110d3cccb700     movss dword ptr [0xb7cc3c], xmm1
// 005f8f8e  f30f110540ccb700     movss dword ptr [0xb7cc40], xmm0
// 005f8f96  f30f100538ccb700     movss xmm0, dword ptr [0xb7cc38]
// 005f8f9e  83ec0c               sub esp, 0xc
// 005f8fa1  8bc4                 mov eax, esp
// 005f8fa3  f30f1100             movss dword ptr [eax], xmm0
// 005f8fa7  f30f10053cccb700     movss xmm0, dword ptr [0xb7cc3c]
// 005f8faf  f30f114004           movss dword ptr [eax + 4], xmm0
// 005f8fb4  f30f100540ccb700     movss xmm0, dword ptr [0xb7cc40]
// 005f8fbc  f30f114008           movss dword ptr [eax + 8], xmm0
// 005f8fc1  8b442410             mov eax, dword ptr [esp + 0x10]
// 005f8fc5  50                   push eax
// 005f8fc6  e825fcffff           call 0x5f8bf0
// 005f8fcb  c20400               ret 4
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ?lookAt@CoordinateFrame@G3D@@QAEXABVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
