// from server: 100% by auto
// roc 2011-06 0042ffd0  unit: MainLogManager  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0042ffd0
//
// 0042ffd0  8bc1                 mov eax, ecx
// 0042ffd2  32c9                 xor cl, cl
// 0042ffd4  8808                 mov byte ptr [eax], cl
// 0042ffd6  884801               mov byte ptr [eax + 1], cl
// 0042ffd9  884802               mov byte ptr [eax + 2], cl
// 0042ffdc  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??0Color3uint8@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
