// roc 2010-06 00483cd0  unit: G3D::ReferenceCountedObject  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00483cd0
//
// 00483cd0  b901000000           mov ecx, 1
// 00483cd5  33c0                 xor eax, eax
// 00483cd7  840dd830c000         test byte ptr [0xc030d8], cl
// 00483cdd  7545                 jne 0x483d24
// 00483cdf  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 00483ce7  090dd830c000         or dword ptr [0xc030d8], ecx
// 00483ced  c705bc30c00003000000 mov dword ptr [0xc030bc], 3
// 00483cf7  890dc030c000         mov dword ptr [0xc030c0], ecx
// 00483cfd  a3c430c000           mov dword ptr [0xc030c4], eax
// 00483d02  f30f1105c830c000     movss dword ptr [0xc030c8], xmm0
// 00483d0a  880dcc30c000         mov byte ptr [0xc030cc], cl
// 00483d10  c705d030c000e8030000 mov dword ptr [0xc030d0], 0x3e8
// 00483d1a  c705d430c00018fcffff mov dword ptr [0xc030d4], 0xfffffc18
// 00483d24  3805b830c000         cmp byte ptr [0xc030b8], al
// 00483d2a  752f                 jne 0x483d5b
// 00483d2c  f30f100524f6a100     movss xmm0, dword ptr [0xa1f624]
// 00483d34  880db830c000         mov byte ptr [0xc030b8], cl
// 00483d3a  c705bc30c00002000000 mov dword ptr [0xc030bc], 2
// 00483d44  a3c030c000           mov dword ptr [0xc030c0], eax
// 00483d49  a3c430c000           mov dword ptr [0xc030c4], eax
// 00483d4e  f30f1105c830c000     movss dword ptr [0xc030c8], xmm0
// 00483d56  a2cc30c000           mov byte ptr [0xc030cc], al
// 00483d5b  b8bc30c000           mov eax, 0xc030bc
// 00483d60  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?video@Settings@Texture@G3D@@SAABV123@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
