// from server: 100% by auto
// roc 2009-06 005764d0  unit: G3D::BinaryInput  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005764d0
//
// 005764d0  b801000000           mov eax, 1
// 005764d5  8405e82aa400         test byte ptr [0xa42ae8], al
// 005764db  7522                 jne 0x5764ff
// 005764dd  d9e8                 fld1 
// 005764df  0905e82aa400         or dword ptr [0xa42ae8], eax
// 005764e5  d91ddc2aa400         fstp dword ptr [0xa42adc]
// 005764eb  d9054cad8b00         fld dword ptr [0x8bad4c]
// 005764f1  d91de02aa400         fstp dword ptr [0xa42ae0]
// 005764f7  d9ee                 fldz 
// 005764f9  d91de42aa400         fstp dword ptr [0xa42ae4]
// 005764ff  b8dc2aa400           mov eax, 0xa42adc
// 00576504  c3                   ret 
// library g3d-6.09/G3Dcpp\Color3.cpp (function ?orange@Color3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
