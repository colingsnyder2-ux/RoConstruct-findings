// from server: 100% by auto
// roc 2009-06 00578790  unit: G3D::LineSegment  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00578790
//
// 00578790  b801000000           mov eax, 1
// 00578795  84053c2ca400         test byte ptr [0xa42c3c], al
// 0057879b  7540                 jne 0x5787dd
// 0057879d  d9e8                 fld1 
// 0057879f  09053c2ca400         or dword ptr [0xa42c3c], eax
// 005787a5  d915182ca400         fst dword ptr [0xa42c18]
// 005787ab  d9ee                 fldz 
// 005787ad  d9151c2ca400         fst dword ptr [0xa42c1c]
// 005787b3  d915202ca400         fst dword ptr [0xa42c20]
// 005787b9  d915242ca400         fst dword ptr [0xa42c24]
// 005787bf  d9152c2ca400         fst dword ptr [0xa42c2c]
// 005787c5  d915302ca400         fst dword ptr [0xa42c30]
// 005787cb  d91d342ca400         fstp dword ptr [0xa42c34]
// 005787d1  d915282ca400         fst dword ptr [0xa42c28]
// 005787d7  d91d382ca400         fstp dword ptr [0xa42c38]
// 005787dd  b8182ca400           mov eax, 0xa42c18
// 005787e2  c3                   ret 
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ?identity@Matrix3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
