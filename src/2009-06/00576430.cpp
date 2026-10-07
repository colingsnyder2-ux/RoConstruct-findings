// roc 2009-06 00576430  unit: G3D::BinaryInput  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00576430
//
// 00576430  b801000000           mov eax, 1
// 00576435  8405b82aa400         test byte ptr [0xa42ab8], al
// 0057643b  751c                 jne 0x576459
// 0057643d  d9ee                 fldz 
// 0057643f  0905b82aa400         or dword ptr [0xa42ab8], eax
// 00576445  d915ac2aa400         fst dword ptr [0xa42aac]
// 0057644b  d91db02aa400         fstp dword ptr [0xa42ab0]
// 00576451  d9e8                 fld1 
// 00576453  d91db42aa400         fstp dword ptr [0xa42ab4]
// 00576459  b8ac2aa400           mov eax, 0xa42aac
// 0057645e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?unitZ@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
