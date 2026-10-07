// roc 2007-08 006b4970  unit: CXTPControlGallery  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b4970
//
// 006b4970  56                   push esi
// 006b4971  8bf1                 mov esi, ecx
// 006b4973  e88817f8ff           call 0x636100
// 006b4978  c706dc607d00         mov dword ptr [esi], 0x7d60dc
// 006b497e  c74654cc607d00       mov dword ptr [esi + 0x54], 0x7d60cc
// 006b4985  c7465c6c607d00       mov dword ptr [esi + 0x5c], 0x7d606c
// 006b498c  8bc6                 mov eax, esi
// 006b498e  5e                   pop esi
// 006b498f  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlComboBoxExt.cpp (function ??0CXTPControlFontComboBoxList@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlComboBoxExt.cpp
