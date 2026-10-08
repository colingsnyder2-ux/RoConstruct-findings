// from server: 100% by auto
// roc 2007-08 00501570  unit: G3D::Shader  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00501570
//
// 00501570  b801000000           mov eax, 1
// 00501575  840554098c00         test byte ptr [0x8c0954], al
// 0050157b  7514                 jne 0x501591
// 0050157d  d9ee                 fldz 
// 0050157f  090554098c00         or dword ptr [0x8c0954], eax
// 00501585  d9154c098c00         fst dword ptr [0x8c094c]
// 0050158b  d91d50098c00         fstp dword ptr [0x8c0950]
// 00501591  b84c098c00           mov eax, 0x8c094c
// 00501596  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector2.cpp (function ?zero@Vector2@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector2.cpp
