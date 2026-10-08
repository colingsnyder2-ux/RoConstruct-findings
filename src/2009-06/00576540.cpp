// from server: 100% by auto
// roc 2009-06 00576540  unit: G3D::BinaryInput  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00576540
//
// 00576540  b801000000           mov eax, 1
// 00576545  8405082ba400         test byte ptr [0xa42b08], al
// 0057654b  751e                 jne 0x57656b
// 0057654d  d90508e88b00         fld dword ptr [0x8be808]
// 00576553  0905082ba400         or dword ptr [0xa42b08], eax
// 00576559  d915fc2aa400         fst dword ptr [0xa42afc]
// 0057655f  d915002ba400         fst dword ptr [0xa42b00]
// 00576565  d91d042ba400         fstp dword ptr [0xa42b04]
// 0057656b  b8fc2aa400           mov eax, 0xa42afc
// 00576570  c3                   ret 
// library g3d-6.09/G3Dcpp\Color3.cpp (function ?gray@Color3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
