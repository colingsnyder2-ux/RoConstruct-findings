// from server: 100% by auto
// roc 2010-06 00490a70  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00490a70
//
// 00490a70  b801000000           mov eax, 1
// 00490a75  8405a03cc000         test byte ptr [0xc03ca0], al
// 00490a7b  7513                 jne 0x490a90
// 00490a7d  0905a03cc000         or dword ptr [0xc03ca0], eax
// 00490a83  a1f0a69e00           mov eax, dword ptr [0x9ea6f0]
// 00490a88  dd00                 fld qword ptr [eax]
// 00490a8a  dd1d983cc000         fstp qword ptr [0xc03c98]
// 00490a90  b8983cc000           mov eax, 0xc03c98
// 00490a95  c3                   ret 
// library g3d-6.09/G3Dcpp\AABox.cpp (function ?inf@G3D@@YAABNXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/AABox.cpp
