// roc 2008-06 00514940  unit: G3D::GCamera  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00514940
//
// 00514940  b801000000           mov eax, 1
// 00514945  840524379700         test byte ptr [0x973724], al
// 0051494b  7522                 jne 0x51496f
// 0051494d  d905b8888200         fld dword ptr [0x8288b8]
// 00514953  090524379700         or dword ptr [0x973724], eax
// 00514959  d91d18379700         fstp dword ptr [0x973718]
// 0051495f  d9ee                 fldz 
// 00514961  d91d1c379700         fstp dword ptr [0x97371c]
// 00514967  d9e8                 fld1 
// 00514969  d91d20379700         fstp dword ptr [0x973720]
// 0051496f  b818379700           mov eax, 0x973718
// 00514974  c3                   ret 
// library g3d-6.09/G3Dcpp\Color3.cpp (function ?purple@Color3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
