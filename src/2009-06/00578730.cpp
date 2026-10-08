// from server: 100% by auto
// roc 2009-06 00578730  unit: G3D::LineSegment  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00578730
//
// 00578730  b801000000           mov eax, 1
// 00578735  8405142ca400         test byte ptr [0xa42c14], al
// 0057873b  753e                 jne 0x57877b
// 0057873d  d9ee                 fldz 
// 0057873f  0905142ca400         or dword ptr [0xa42c14], eax
// 00578745  d915f02ba400         fst dword ptr [0xa42bf0]
// 0057874b  d915f42ba400         fst dword ptr [0xa42bf4]
// 00578751  d915f82ba400         fst dword ptr [0xa42bf8]
// 00578757  d915fc2ba400         fst dword ptr [0xa42bfc]
// 0057875d  d915002ca400         fst dword ptr [0xa42c00]
// 00578763  d915042ca400         fst dword ptr [0xa42c04]
// 00578769  d915082ca400         fst dword ptr [0xa42c08]
// 0057876f  d9150c2ca400         fst dword ptr [0xa42c0c]
// 00578775  d91d102ca400         fstp dword ptr [0xa42c10]
// 0057877b  b8f02ba400           mov eax, 0xa42bf0
// 00578780  c3                   ret 
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ?zero@Matrix3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
