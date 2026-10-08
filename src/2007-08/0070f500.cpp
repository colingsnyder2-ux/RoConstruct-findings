// from server: 100% by auto
// roc 2007-08 0070f500  unit: CXTPRichRender::XTextHost  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070f500
//
// 0070f500  56                   push esi
// 0070f501  8bf1                 mov esi, ecx
// 0070f503  e8328e0200           call 0x73833a
// 0070f508  33c0                 xor eax, eax
// 0070f50a  894620               mov dword ptr [esi + 0x20], eax
// 0070f50d  894624               mov dword ptr [esi + 0x24], eax
// 0070f510  894630               mov dword ptr [esi + 0x30], eax
// 0070f513  89462c               mov dword ptr [esi + 0x2c], eax
// 0070f516  894634               mov dword ptr [esi + 0x34], eax
// 0070f519  c706a4e47d00         mov dword ptr [esi], 0x7de4a4
// 0070f51f  8bc6                 mov eax, esi
// 0070f521  5e                   pop esi
// 0070f522  c3                   ret 
// library xtp-11.2.2-vc8/Source\Common\XTPOffice2007Image.cpp (function ??0CXTPOffice2007Image@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPOffice2007Image.cpp
