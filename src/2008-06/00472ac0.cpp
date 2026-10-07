// roc 2008-06 00472ac0  unit: G3D::ReferenceCountedObject  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00472ac0
//
// 00472ac0  b801000000           mov eax, 1
// 00472ac5  840568ef9600         test byte ptr [0x96ef68], al
// 00472acb  7544                 jne 0x472b11
// 00472acd  d90534c48100         fld dword ptr [0x81c434]
// 00472ad3  090568ef9600         or dword ptr [0x96ef68], eax
// 00472ad9  d91d58ef9600         fstp dword ptr [0x96ef58]
// 00472adf  c7054cef960003000000 mov dword ptr [0x96ef4c], 3
// 00472ae9  a350ef9600           mov dword ptr [0x96ef50], eax
// 00472aee  c70554ef960000000000 mov dword ptr [0x96ef54], 0
// 00472af8  a25cef9600           mov byte ptr [0x96ef5c], al
// 00472afd  c70560ef9600e8030000 mov dword ptr [0x96ef60], 0x3e8
// 00472b07  c70564ef960018fcffff mov dword ptr [0x96ef64], 0xfffffc18
// 00472b11  b84cef9600           mov eax, 0x96ef4c
// 00472b16  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?defaults@Settings@Texture@G3D@@SAABV123@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
