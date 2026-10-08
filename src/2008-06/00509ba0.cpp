// from server: 100% by auto
// roc 2008-06 00509ba0  unit: G3D::Shader  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00509ba0
//
// 00509ba0  b801000000           mov eax, 1
// 00509ba5  8405bc359700         test byte ptr [0x9735bc], al
// 00509bab  7514                 jne 0x509bc1
// 00509bad  d9ee                 fldz 
// 00509baf  0905bc359700         or dword ptr [0x9735bc], eax
// 00509bb5  d915b4359700         fst dword ptr [0x9735b4]
// 00509bbb  d91db8359700         fstp dword ptr [0x9735b8]
// 00509bc1  b8b4359700           mov eax, 0x9735b4
// 00509bc6  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector2.cpp (function ?zero@Vector2@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector2.cpp
