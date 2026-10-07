// roc 2009-06 00578850  unit: G3D::LineSegment  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00578850
//
// 00578850  b801000000           mov eax, 1
// 00578855  8405742ca400         test byte ptr [0xa42c74], al
// 0057885b  7520                 jne 0x57887d
// 0057885d  d9ee                 fldz 
// 0057885f  0905742ca400         or dword ptr [0xa42c74], eax
// 00578865  d915642ca400         fst dword ptr [0xa42c64]
// 0057886b  d915682ca400         fst dword ptr [0xa42c68]
// 00578871  d9156c2ca400         fst dword ptr [0xa42c6c]
// 00578877  d91d702ca400         fstp dword ptr [0xa42c70]
// 0057887d  b8642ca400           mov eax, 0xa42c64
// 00578882  c3                   ret 
// library g3d-6.09/G3Dcpp\Color4.cpp (function ?zero@Color4@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
