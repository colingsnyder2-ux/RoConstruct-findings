// roc 2009-06 0056cbc0  unit: G3D::Shader  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056cbc0
//
// 0056cbc0  ba01000000           mov edx, 1
// 0056cbc5  8415d829a400         test byte ptr [0xa429d8], dl
// 0056cbcb  7549                 jne 0x56cc16
// 0056cbcd  a1b8c8a300           mov eax, dword ptr [0xa3c8b8]
// 0056cbd2  0915d829a400         or dword ptr [0xa429d8], edx
// 0056cbd8  8b0d44e58900         mov ecx, dword ptr [0x89e544]
// 0056cbde  84c2                 test dl, al
// 0056cbe0  7522                 jne 0x56cc04
// 0056cbe2  0bc2                 or eax, edx
// 0056cbe4  a3b8c8a300           mov dword ptr [0xa3c8b8], eax
// 0056cbe9  dd01                 fld qword ptr [ecx]
// 0056cbeb  dd1db0c8a300         fstp qword ptr [0xa3c8b0]
// 0056cbf1  84c2                 test dl, al
// 0056cbf3  750f                 jne 0x56cc04
// 0056cbf5  0bc2                 or eax, edx
// 0056cbf7  a3b8c8a300           mov dword ptr [0xa3c8b8], eax
// 0056cbfc  dd01                 fld qword ptr [ecx]
// 0056cbfe  dd1db0c8a300         fstp qword ptr [0xa3c8b0]
// 0056cc04  dd05b0c8a300         fld qword ptr [0xa3c8b0]
// 0056cc0a  d915d029a400         fst dword ptr [0xa429d0]
// 0056cc10  d91dd429a400         fstp dword ptr [0xa429d4]
// 0056cc16  b8d029a400           mov eax, 0xa429d0
// 0056cc1b  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\Vector2.cpp (function ?inf@Vector2@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Vector2.cpp
