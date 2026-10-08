// roc 2009-12 004c6a80  unit: G3D::ReferenceCountedObject  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c6a80
//
// 004c6a80  b801000000           mov eax, 1
// 004c6a85  8405c4cfb700         test byte ptr [0xb7cfc4], al
// 004c6a8b  7548                 jne 0x4c6ad5
// 004c6a8d  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 004c6a95  0905c4cfb700         or dword ptr [0xb7cfc4], eax
// 004c6a9b  c705a8cfb70003000000 mov dword ptr [0xb7cfa8], 3
// 004c6aa5  a3accfb700           mov dword ptr [0xb7cfac], eax
// 004c6aaa  c705b0cfb70000000000 mov dword ptr [0xb7cfb0], 0
// 004c6ab4  f30f1105b4cfb700     movss dword ptr [0xb7cfb4], xmm0
// 004c6abc  a2b8cfb700           mov byte ptr [0xb7cfb8], al
// 004c6ac1  c705bccfb700e8030000 mov dword ptr [0xb7cfbc], 0x3e8
// 004c6acb  c705c0cfb70018fcffff mov dword ptr [0xb7cfc0], 0xfffffc18
// 004c6ad5  b8a8cfb700           mov eax, 0xb7cfa8
// 004c6ada  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?defaults@Settings@Texture@G3D@@SAABV123@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
