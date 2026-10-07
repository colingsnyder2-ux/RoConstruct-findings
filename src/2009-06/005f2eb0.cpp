// roc 2009-06 005f2eb0  unit: RBX::PartInstance  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f2eb0
//
// 005f2eb0  b801000000           mov eax, 1
// 005f2eb5  84056ca4a400         test byte ptr [0xa4a46c], al
// 005f2ebb  751a                 jne 0x5f2ed7
// 005f2ebd  d9e8                 fld1 
// 005f2ebf  09056ca4a400         or dword ptr [0xa4a46c], eax
// 005f2ec5  d91560a4a400         fst dword ptr [0xa4a460]
// 005f2ecb  d91564a4a400         fst dword ptr [0xa4a464]
// 005f2ed1  d91d68a4a400         fstp dword ptr [0xa4a468]
// 005f2ed7  b860a4a400           mov eax, 0xa4a460
// 005f2edc  c3                   ret 
// library g3d-6.09/G3Dcpp\Color3.cpp (function ?white@Color3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
