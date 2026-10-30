// from server: 100% by auto
// roc 2008-06 00791420  unit: CXTCaptionButtonThemeFactory  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00791420
//
// 00791420  56                   push esi
// 00791421  8bf1                 mov esi, ecx
// 00791423  e8c8020100           call 0x7a16f0
// 00791428  c706b4af8600         mov dword ptr [esi], 0x86afb4
// 0079142e  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00791435  8bc6                 mov eax, esi
// 00791437  5e                   pop esi
// 00791438  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTCaptionTheme.cpp (function ??0CXTCaptionButtonTheme@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaptionTheme.cpp
