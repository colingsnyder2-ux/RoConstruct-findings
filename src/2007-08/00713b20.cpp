// roc 2007-08 00713b20  unit: CXTCaptionTheme  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00713b20
//
// 00713b20  56                   push esi
// 00713b21  8bf1                 mov esi, ecx
// 00713b23  e8f890cfff           call 0x40cc20
// 00713b28  e84354f5ff           call 0x668f70
// 00713b2d  6a10                 push 0x10
// 00713b2f  8bc8                 mov ecx, eax
// 00713b31  e83a4cf5ff           call 0x668770
// 00713b36  894618               mov dword ptr [esi + 0x18], eax
// 00713b39  e83254f5ff           call 0x668f70
// 00713b3e  6a14                 push 0x14
// 00713b40  8bc8                 mov ecx, eax
// 00713b42  e8294cf5ff           call 0x668770
// 00713b47  894624               mov dword ptr [esi + 0x24], eax
// 00713b4a  5e                   pop esi
// 00713b4b  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTCaptionTheme.cpp (function ?RefreshMetrics@CXTCaptionTheme@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTCaptionTheme.cpp
