// roc 2012-06 00434d90  unit: MainLogManager  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00434d90
//
// 00434d90  8bc1                 mov eax, ecx
// 00434d92  32c9                 xor cl, cl
// 00434d94  8808                 mov byte ptr [eax], cl
// 00434d96  884801               mov byte ptr [eax + 1], cl
// 00434d99  884802               mov byte ptr [eax + 2], cl
// 00434d9c  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??0Color3uint8@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
