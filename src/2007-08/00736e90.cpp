// roc 2007-08 00736e90  unit: G3D::GFont  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00736e90
//
// 00736e90  b801000000           mov eax, 1
// 00736e95  8405a49b8c00         test byte ptr [0x8c9ba4], al
// 00736e9b  7520                 jne 0x736ebd
// 00736e9d  d9ee                 fldz 
// 00736e9f  0905a49b8c00         or dword ptr [0x8c9ba4], eax
// 00736ea5  d915949b8c00         fst dword ptr [0x8c9b94]
// 00736eab  d915989b8c00         fst dword ptr [0x8c9b98]
// 00736eb1  d9159c9b8c00         fst dword ptr [0x8c9b9c]
// 00736eb7  d91da09b8c00         fstp dword ptr [0x8c9ba0]
// 00736ebd  b8949b8c00           mov eax, 0x8c9b94
// 00736ec2  c3                   ret 
// library g3d-6.09/G3Dcpp\Color4.cpp (function ?zero@Color4@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
