// roc 2009-12 005f6df0  unit: G3D::BinaryInput  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f6df0
//
// 005f6df0  b801000000           mov eax, 1
// 005f6df5  8405f43fb800         test byte ptr [0xb83ff4], al
// 005f6dfb  7529                 jne 0x5f6e26
// 005f6dfd  0f57c0               xorps xmm0, xmm0
// 005f6e00  0905f43fb800         or dword ptr [0xb83ff4], eax
// 005f6e06  f30f1105e83fb800     movss dword ptr [0xb83fe8], xmm0
// 005f6e0e  f30f1105ec3fb800     movss dword ptr [0xb83fec], xmm0
// 005f6e16  f30f100518ea9a00     movss xmm0, dword ptr [0x9aea18]
// 005f6e1e  f30f1105f03fb800     movss dword ptr [0xb83ff0], xmm0
// 005f6e26  b8e83fb800           mov eax, 0xb83fe8
// 005f6e2b  c3                   ret 
// library g3d-6.09/G3Dcpp\Box.cpp (function ?unitZ@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Box.cpp
