// roc 2010-06 0054f2d0  unit: G3D::Shader  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054f2d0
//
// 0054f2d0  ba01000000           mov edx, 1
// 0054f2d5  8415109fc000         test byte ptr [0xc09f10], dl
// 0054f2db  7549                 jne 0x54f326
// 0054f2dd  a1a03cc000           mov eax, dword ptr [0xc03ca0]
// 0054f2e2  0915109fc000         or dword ptr [0xc09f10], edx
// 0054f2e8  8b0df0a69e00         mov ecx, dword ptr [0x9ea6f0]
// 0054f2ee  84c2                 test dl, al
// 0054f2f0  7522                 jne 0x54f314
// 0054f2f2  0bc2                 or eax, edx
// 0054f2f4  a3a03cc000           mov dword ptr [0xc03ca0], eax
// 0054f2f9  dd01                 fld qword ptr [ecx]
// 0054f2fb  dd1d983cc000         fstp qword ptr [0xc03c98]
// 0054f301  84c2                 test dl, al
// 0054f303  750f                 jne 0x54f314
// 0054f305  0bc2                 or eax, edx
// 0054f307  a3a03cc000           mov dword ptr [0xc03ca0], eax
// 0054f30c  dd01                 fld qword ptr [ecx]
// 0054f30e  dd1d983cc000         fstp qword ptr [0xc03c98]
// 0054f314  dd05983cc000         fld qword ptr [0xc03c98]
// 0054f31a  d915089fc000         fst dword ptr [0xc09f08]
// 0054f320  d91d0c9fc000         fstp dword ptr [0xc09f0c]
// 0054f326  b8089fc000           mov eax, 0xc09f08
// 0054f32b  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\Vector2.cpp (function ?inf@Vector2@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Vector2.cpp
