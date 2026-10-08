// roc 2009-12 005f6e30  unit: G3D::BinaryInput  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f6e30
//
// 005f6e30  b801000000           mov eax, 1
// 005f6e35  84050440b800         test byte ptr [0xb84004], al
// 005f6e3b  7531                 jne 0x5f6e6e
// 005f6e3d  f30f1005ac4a9b00     movss xmm0, dword ptr [0x9b4aac]
// 005f6e45  09050440b800         or dword ptr [0xb84004], eax
// 005f6e4b  f30f1105f83fb800     movss dword ptr [0xb83ff8], xmm0
// 005f6e53  0f57c0               xorps xmm0, xmm0
// 005f6e56  f30f1105fc3fb800     movss dword ptr [0xb83ffc], xmm0
// 005f6e5e  f30f100518ea9a00     movss xmm0, dword ptr [0x9aea18]
// 005f6e66  f30f11050040b800     movss dword ptr [0xb84000], xmm0
// 005f6e6e  b8f83fb800           mov eax, 0xb83ff8
// 005f6e73  c3                   ret 
// library g3d-6.09/G3Dcpp\Color3.cpp (function ?purple@Color3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
