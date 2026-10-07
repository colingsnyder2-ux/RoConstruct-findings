// roc 2011-06 008a0f40  unit: CXTPShortcutManager  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a0f40
//
// 008a0f40  8bc1                 mov eax, ecx
// 008a0f42  33c9                 xor ecx, ecx
// 008a0f44  894804               mov dword ptr [eax + 4], ecx
// 008a0f47  c7001425ad00         mov dword ptr [eax], 0xad2514
// 008a0f4d  894808               mov dword ptr [eax + 8], ecx
// 008a0f50  c3                   ret 
// library xtp-15.2.1/Source\GraphicLibrary\XTPGraphicBitmapPng.cpp (function ??0CXTPGraphicBitmapPng@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/GraphicLibrary/XTPGraphicBitmapPng.cpp
