// from server: 100% by auto
// roc 2008-06 00472b20  unit: G3D::ReferenceCountedObject  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00472b20
//
// 00472b20  b901000000           mov ecx, 1
// 00472b25  33c0                 xor eax, eax
// 00472b27  840d8cef9600         test byte ptr [0x96ef8c], cl
// 00472b2d  7541                 jne 0x472b70
// 00472b2f  d90534c48100         fld dword ptr [0x81c434]
// 00472b35  090d8cef9600         or dword ptr [0x96ef8c], ecx
// 00472b3b  d91d7cef9600         fstp dword ptr [0x96ef7c]
// 00472b41  c70570ef960003000000 mov dword ptr [0x96ef70], 3
// 00472b4b  890d74ef9600         mov dword ptr [0x96ef74], ecx
// 00472b51  a378ef9600           mov dword ptr [0x96ef78], eax
// 00472b56  880d80ef9600         mov byte ptr [0x96ef80], cl
// 00472b5c  c70584ef9600e8030000 mov dword ptr [0x96ef84], 0x3e8
// 00472b66  c70588ef960018fcffff mov dword ptr [0x96ef88], 0xfffffc18
// 00472b70  38056cef9600         cmp byte ptr [0x96ef6c], al
// 00472b76  7527                 jne 0x472b9f
// 00472b78  d9e8                 fld1 
// 00472b7a  880d6cef9600         mov byte ptr [0x96ef6c], cl
// 00472b80  d91d7cef9600         fstp dword ptr [0x96ef7c]
// 00472b86  c70570ef960002000000 mov dword ptr [0x96ef70], 2
// 00472b90  a374ef9600           mov dword ptr [0x96ef74], eax
// 00472b95  a378ef9600           mov dword ptr [0x96ef78], eax
// 00472b9a  a280ef9600           mov byte ptr [0x96ef80], al
// 00472b9f  b870ef9600           mov eax, 0x96ef70
// 00472ba4  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?video@Settings@Texture@G3D@@SAABV123@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
