// roc 2009-06 0049dbf0  unit: G3D::VARArea  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049dbf0
//
// 0049dbf0  b801000000           mov eax, 1
// 0049dbf5  8405b8c8a300         test byte ptr [0xa3c8b8], al
// 0049dbfb  7513                 jne 0x49dc10
// 0049dbfd  0905b8c8a300         or dword ptr [0xa3c8b8], eax
// 0049dc03  a144e58900           mov eax, dword ptr [0x89e544]
// 0049dc08  dd00                 fld qword ptr [eax]
// 0049dc0a  dd1db0c8a300         fstp qword ptr [0xa3c8b0]
// 0049dc10  b8b0c8a300           mov eax, 0xa3c8b0
// 0049dc15  c3                   ret 
// library g3d-6.09/G3Dcpp\AABox.cpp (function ?inf@G3D@@YAABNXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/AABox.cpp
