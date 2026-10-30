// from server: 100% by auto
// roc 2008-06 00745040  unit: VCRect::?$CArray  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00745040
//
// 00745040  8bc1                 mov eax, ecx
// 00745042  33c9                 xor ecx, ecx
// 00745044  894804               mov dword ptr [eax + 4], ecx
// 00745047  c7004c3a8600         mov dword ptr [eax], 0x863a4c
// 0074504d  894808               mov dword ptr [eax + 8], ecx
// 00745050  c3                   ret 
// library xtp-11.2.2/Source\GraphicLibrary\XTPGraphicBitmapPng.cpp (function ??0CXTPGraphicBitmapPng@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/GraphicLibrary/XTPGraphicBitmapPng.cpp
