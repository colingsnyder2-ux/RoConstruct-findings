// roc 2009-06 0049a260  unit: G3D::ReferenceCountedObject  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049a260
//
// 0049a260  b901000000           mov ecx, 1
// 0049a265  33c0                 xor eax, eax
// 0049a267  840d28c8a300         test byte ptr [0xa3c828], cl
// 0049a26d  7541                 jne 0x49a2b0
// 0049a26f  d90544d08b00         fld dword ptr [0x8bd044]
// 0049a275  090d28c8a300         or dword ptr [0xa3c828], ecx
// 0049a27b  d91d18c8a300         fstp dword ptr [0xa3c818]
// 0049a281  c7050cc8a30003000000 mov dword ptr [0xa3c80c], 3
// 0049a28b  890d10c8a300         mov dword ptr [0xa3c810], ecx
// 0049a291  a314c8a300           mov dword ptr [0xa3c814], eax
// 0049a296  880d1cc8a300         mov byte ptr [0xa3c81c], cl
// 0049a29c  c70520c8a300e8030000 mov dword ptr [0xa3c820], 0x3e8
// 0049a2a6  c70524c8a30018fcffff mov dword ptr [0xa3c824], 0xfffffc18
// 0049a2b0  380508c8a300         cmp byte ptr [0xa3c808], al
// 0049a2b6  7527                 jne 0x49a2df
// 0049a2b8  d9e8                 fld1 
// 0049a2ba  880d08c8a300         mov byte ptr [0xa3c808], cl
// 0049a2c0  d91d18c8a300         fstp dword ptr [0xa3c818]
// 0049a2c6  c7050cc8a30002000000 mov dword ptr [0xa3c80c], 2
// 0049a2d0  a310c8a300           mov dword ptr [0xa3c810], eax
// 0049a2d5  a314c8a300           mov dword ptr [0xa3c814], eax
// 0049a2da  a21cc8a300           mov byte ptr [0xa3c81c], al
// 0049a2df  b80cc8a300           mov eax, 0xa3c80c
// 0049a2e4  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?video@Settings@Texture@G3D@@SAABV123@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
