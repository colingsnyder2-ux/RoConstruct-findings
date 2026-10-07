// roc 2007-08 00713b80  unit: CXTCaptionButtonThemeFactory  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00713b80
//
// 00713b80  56                   push esi
// 00713b81  8bf1                 mov esi, ecx
// 00713b83  e8b8cc0000           call 0x720840
// 00713b88  c706fcea7d00         mov dword ptr [esi], 0x7deafc
// 00713b8e  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00713b95  8bc6                 mov eax, esi
// 00713b97  5e                   pop esi
// 00713b98  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTCaptionTheme.cpp (function ??0CXTCaptionButtonTheme@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTCaptionTheme.cpp
