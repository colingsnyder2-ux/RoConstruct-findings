// roc 2010-06 00483c70  unit: G3D::ReferenceCountedObject  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00483c70
//
// 00483c70  b801000000           mov eax, 1
// 00483c75  8405b430c000         test byte ptr [0xc030b4], al
// 00483c7b  7548                 jne 0x483cc5
// 00483c7d  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 00483c85  0905b430c000         or dword ptr [0xc030b4], eax
// 00483c8b  c7059830c00003000000 mov dword ptr [0xc03098], 3
// 00483c95  a39c30c000           mov dword ptr [0xc0309c], eax
// 00483c9a  c705a030c00000000000 mov dword ptr [0xc030a0], 0
// 00483ca4  f30f1105a430c000     movss dword ptr [0xc030a4], xmm0
// 00483cac  a2a830c000           mov byte ptr [0xc030a8], al
// 00483cb1  c705ac30c000e8030000 mov dword ptr [0xc030ac], 0x3e8
// 00483cbb  c705b030c00018fcffff mov dword ptr [0xc030b0], 0xfffffc18
// 00483cc5  b89830c000           mov eax, 0xc03098
// 00483cca  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?defaults@Settings@Texture@G3D@@SAABV123@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
