// roc 2009-12 005f6f10  unit: G3D::BinaryInput  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f6f10
//
// 005f6f10  b801000000           mov eax, 1
// 005f6f15  84053440b800         test byte ptr [0xb84034], al
// 005f6f1b  7521                 jne 0x5f6f3e
// 005f6f1d  0f57c0               xorps xmm0, xmm0
// 005f6f20  09053440b800         or dword ptr [0xb84034], eax
// 005f6f26  f30f11052840b800     movss dword ptr [0xb84028], xmm0
// 005f6f2e  f30f11052c40b800     movss dword ptr [0xb8402c], xmm0
// 005f6f36  f30f11053040b800     movss dword ptr [0xb84030], xmm0
// 005f6f3e  b82840b800           mov eax, 0xb84028
// 005f6f43  c3                   ret 
// library g3d-6.09/G3Dcpp\Box.cpp (function ?zero@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Box.cpp
