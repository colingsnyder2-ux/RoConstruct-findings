// roc 2009-12 005f4940  unit: seg_005f0000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f4940
//
// 005f4940  b801000000           mov eax, 1
// 005f4945  8405983eb800         test byte ptr [0xb83e98], al
// 005f494b  7551                 jne 0x5f499e
// 005f494d  0f57c0               xorps xmm0, xmm0
// 005f4950  0905983eb800         or dword ptr [0xb83e98], eax
// 005f4956  f30f1105743eb800     movss dword ptr [0xb83e74], xmm0
// 005f495e  f30f1105783eb800     movss dword ptr [0xb83e78], xmm0
// 005f4966  f30f11057c3eb800     movss dword ptr [0xb83e7c], xmm0
// 005f496e  f30f1105803eb800     movss dword ptr [0xb83e80], xmm0
// 005f4976  f30f1105843eb800     movss dword ptr [0xb83e84], xmm0
// 005f497e  f30f1105883eb800     movss dword ptr [0xb83e88], xmm0
// 005f4986  f30f11058c3eb800     movss dword ptr [0xb83e8c], xmm0
// 005f498e  f30f1105903eb800     movss dword ptr [0xb83e90], xmm0
// 005f4996  f30f1105943eb800     movss dword ptr [0xb83e94], xmm0
// 005f499e  b8743eb800           mov eax, 0xb83e74
// 005f49a3  c3                   ret 
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ?zero@Matrix3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
