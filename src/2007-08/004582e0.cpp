// from server: 100% by auto
// roc 2007-08 004582e0  unit: CRobloxWnd  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004582e0
//
// 004582e0  51                   push ecx
// 004582e1  d94104               fld dword ptr [ecx + 4]
// 004582e4  d901                 fld dword ptr [ecx]
// 004582e6  d94108               fld dword ptr [ecx + 8]
// 004582e9  d9c1                 fld st(1)
// 004582eb  deca                 fmulp st(2)
// 004582ed  d9c2                 fld st(2)
// 004582ef  decb                 fmulp st(3)
// 004582f1  d9c9                 fxch st(1)
// 004582f3  dec2                 faddp st(2)
// 004582f5  dcc8                 fmul st(0), st(0)
// 004582f7  dec1                 faddp st(1)
// 004582f9  d91c24               fstp dword ptr [esp]
// 004582fc  d90424               fld dword ptr [esp]
// 004582ff  e8088b1d00           call 0x630e0c
// 00458304  d91c24               fstp dword ptr [esp]
// 00458307  d90424               fld dword ptr [esp]
// 0045830a  59                   pop ecx
// 0045830b  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?magnitude@Vector3@G3D@@QBEMXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
