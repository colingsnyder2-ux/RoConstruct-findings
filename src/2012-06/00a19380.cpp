// from server: 100% by auto
// roc 2012-06 00a19380  unit: CXTPShortcutManager  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a19380
//
// 00a19380  8bc1                 mov eax, ecx
// 00a19382  33c9                 xor ecx, ecx
// 00a19384  894804               mov dword ptr [eax + 4], ecx
// 00a19387  c700acdbc100         mov dword ptr [eax], 0xc1dbac
// 00a1938d  894808               mov dword ptr [eax + 8], ecx
// 00a19390  c3                   ret 
// library xtp-15.2.1/Source\GraphicLibrary\XTPGraphicBitmapPng.cpp (function ??0CXTPGraphicBitmapPng@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/GraphicLibrary/XTPGraphicBitmapPng.cpp
