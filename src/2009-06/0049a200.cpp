// roc 2009-06 0049a200  unit: G3D::ReferenceCountedObject  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049a200
//
// 0049a200  b801000000           mov eax, 1
// 0049a205  840504c8a300         test byte ptr [0xa3c804], al
// 0049a20b  7544                 jne 0x49a251
// 0049a20d  d90544d08b00         fld dword ptr [0x8bd044]
// 0049a213  090504c8a300         or dword ptr [0xa3c804], eax
// 0049a219  d91df4c7a300         fstp dword ptr [0xa3c7f4]
// 0049a21f  c705e8c7a30003000000 mov dword ptr [0xa3c7e8], 3
// 0049a229  a3ecc7a300           mov dword ptr [0xa3c7ec], eax
// 0049a22e  c705f0c7a30000000000 mov dword ptr [0xa3c7f0], 0
// 0049a238  a2f8c7a300           mov byte ptr [0xa3c7f8], al
// 0049a23d  c705fcc7a300e8030000 mov dword ptr [0xa3c7fc], 0x3e8
// 0049a247  c70500c8a30018fcffff mov dword ptr [0xa3c800], 0xfffffc18
// 0049a251  b8e8c7a300           mov eax, 0xa3c7e8
// 0049a256  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?defaults@Settings@Texture@G3D@@SAABV123@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
