// roc 2009-12 005f49b0  unit: seg_005f0000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f49b0
//
// 005f49b0  b801000000           mov eax, 1
// 005f49b5  8405c03eb800         test byte ptr [0xb83ec0], al
// 005f49bb  7559                 jne 0x5f4a16
// 005f49bd  0f57c0               xorps xmm0, xmm0
// 005f49c0  f30f100d18ea9a00     movss xmm1, dword ptr [0x9aea18]
// 005f49c8  0905c03eb800         or dword ptr [0xb83ec0], eax
// 005f49ce  f30f110d9c3eb800     movss dword ptr [0xb83e9c], xmm1
// 005f49d6  f30f1105a03eb800     movss dword ptr [0xb83ea0], xmm0
// 005f49de  f30f1105a43eb800     movss dword ptr [0xb83ea4], xmm0
// 005f49e6  f30f1105a83eb800     movss dword ptr [0xb83ea8], xmm0
// 005f49ee  f30f110dac3eb800     movss dword ptr [0xb83eac], xmm1
// 005f49f6  f30f1105b03eb800     movss dword ptr [0xb83eb0], xmm0
// 005f49fe  f30f1105b43eb800     movss dword ptr [0xb83eb4], xmm0
// 005f4a06  f30f1105b83eb800     movss dword ptr [0xb83eb8], xmm0
// 005f4a0e  f30f110dbc3eb800     movss dword ptr [0xb83ebc], xmm1
// 005f4a16  b89c3eb800           mov eax, 0xb83e9c
// 005f4a1b  c3                   ret 
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ?identity@Matrix3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
