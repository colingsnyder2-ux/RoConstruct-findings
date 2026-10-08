// roc 2009-12 00485160  unit: G3D::GCamera  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00485160
//
// 00485160  b801000000           mov eax, 1
// 00485165  840544ccb700         test byte ptr [0xb7cc44], al
// 0048516b  7529                 jne 0x485196
// 0048516d  0f57c0               xorps xmm0, xmm0
// 00485170  f30f100d18ea9a00     movss xmm1, dword ptr [0x9aea18]
// 00485178  090544ccb700         or dword ptr [0xb7cc44], eax
// 0048517e  f30f110538ccb700     movss dword ptr [0xb7cc38], xmm0
// 00485186  f30f110d3cccb700     movss dword ptr [0xb7cc3c], xmm1
// 0048518e  f30f110540ccb700     movss dword ptr [0xb7cc40], xmm0
// 00485196  b838ccb700           mov eax, 0xb7cc38
// 0048519b  c3                   ret 
// library g3d-6.09/G3Dcpp\Box.cpp (function ?unitY@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Box.cpp
