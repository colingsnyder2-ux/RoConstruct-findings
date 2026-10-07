// roc 2007-08 00473030  unit: G3D::VARArea  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00473030
//
// 00473030  b801000000           mov eax, 1
// 00473035  840508d18b00         test byte ptr [0x8bd108], al
// 0047303b  7513                 jne 0x473050
// 0047303d  090508d18b00         or dword ptr [0x8bd108], eax
// 00473043  a164e57700           mov eax, dword ptr [0x77e564]
// 00473048  dd00                 fld qword ptr [eax]
// 0047304a  dd1d00d18b00         fstp qword ptr [0x8bd100]
// 00473050  b800d18b00           mov eax, 0x8bd100
// 00473055  c3                   ret 
// library g3d-6.09/G3Dcpp\AABox.cpp (function ?inf@G3D@@YAABNXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/AABox.cpp
