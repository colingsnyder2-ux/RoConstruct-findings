// from server: 100% by auto
// roc 2007-08 006c9e70  unit: VCRect::?$CArray  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c9e70
//
// 006c9e70  8bc1                 mov eax, ecx
// 006c9e72  33c9                 xor ecx, ecx
// 006c9e74  894804               mov dword ptr [eax + 4], ecx
// 006c9e77  c7007c787d00         mov dword ptr [eax], 0x7d787c
// 006c9e7d  894808               mov dword ptr [eax + 8], ecx
// 006c9e80  c3                   ret 
// library xtp-11.2.2-vc8/Source\GraphicLibrary\XTPGraphicBitmapPng.cpp (function ??0CXTPGraphicBitmapPng@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/GraphicLibrary/XTPGraphicBitmapPng.cpp
