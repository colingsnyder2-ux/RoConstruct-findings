// roc 2008-06 00476520  unit: G3D::VARArea  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00476520
//
// 00476520  b801000000           mov eax, 1
// 00476525  840520f09600         test byte ptr [0x96f020], al
// 0047652b  7513                 jne 0x476540
// 0047652d  090520f09600         or dword ptr [0x96f020], eax
// 00476533  a1ac248000           mov eax, dword ptr [0x8024ac]
// 00476538  dd00                 fld qword ptr [eax]
// 0047653a  dd1d18f09600         fstp qword ptr [0x96f018]
// 00476540  b818f09600           mov eax, 0x96f018
// 00476545  c3                   ret 
// library g3d-6.09/G3Dcpp\AABox.cpp (function ?inf@G3D@@YAABNXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/AABox.cpp
