// from server: 100% by auto
// roc 2008-06 00513dc0  unit: G3D::GCamera  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00513dc0
//
// 00513dc0  b801000000           mov eax, 1
// 00513dc5  840554369700         test byte ptr [0x973654], al
// 00513dcb  753e                 jne 0x513e0b
// 00513dcd  d9ee                 fldz 
// 00513dcf  090554369700         or dword ptr [0x973654], eax
// 00513dd5  d91530369700         fst dword ptr [0x973630]
// 00513ddb  d91534369700         fst dword ptr [0x973634]
// 00513de1  d91538369700         fst dword ptr [0x973638]
// 00513de7  d9153c369700         fst dword ptr [0x97363c]
// 00513ded  d91540369700         fst dword ptr [0x973640]
// 00513df3  d91544369700         fst dword ptr [0x973644]
// 00513df9  d91548369700         fst dword ptr [0x973648]
// 00513dff  d9154c369700         fst dword ptr [0x97364c]
// 00513e05  d91d50369700         fstp dword ptr [0x973650]
// 00513e0b  b830369700           mov eax, 0x973630
// 00513e10  c3                   ret 
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ?zero@Matrix3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
