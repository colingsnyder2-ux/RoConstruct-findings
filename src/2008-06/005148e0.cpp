// roc 2008-06 005148e0  unit: G3D::GCamera  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005148e0
//
// 005148e0  b801000000           mov eax, 1
// 005148e5  840504379700         test byte ptr [0x973704], al
// 005148eb  751c                 jne 0x514909
// 005148ed  d9ee                 fldz 
// 005148ef  090504379700         or dword ptr [0x973704], eax
// 005148f5  d915f8369700         fst dword ptr [0x9736f8]
// 005148fb  d9e8                 fld1 
// 005148fd  d91dfc369700         fstp dword ptr [0x9736fc]
// 00514903  d91d00379700         fstp dword ptr [0x973700]
// 00514909  b8f8369700           mov eax, 0x9736f8
// 0051490e  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?unitY@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
