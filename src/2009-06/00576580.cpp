// roc 2009-06 00576580  unit: G3D::BinaryInput  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00576580
//
// 00576580  b801000000           mov eax, 1
// 00576585  8405182ba400         test byte ptr [0xa42b18], al
// 0057658b  751a                 jne 0x5765a7
// 0057658d  d9e8                 fld1 
// 0057658f  0905182ba400         or dword ptr [0xa42b18], eax
// 00576595  d9150c2ba400         fst dword ptr [0xa42b0c]
// 0057659b  d915102ba400         fst dword ptr [0xa42b10]
// 005765a1  d91d142ba400         fstp dword ptr [0xa42b14]
// 005765a7  b80c2ba400           mov eax, 0xa42b0c
// 005765ac  c3                   ret 
// library g3d-6.09/G3Dcpp\Color3.cpp (function ?white@Color3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
