// from server: 100% by auto
// roc 2007-08 00715030  unit: CXTCaptionButton  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00715030
//
// 00715030  56                   push esi
// 00715031  8bf1                 mov esi, ecx
// 00715033  e806b2f1ff           call 0x63023e
// 00715038  8b4620               mov eax, dword ptr [esi + 0x20]
// 0071503b  6a00                 push 0
// 0071503d  6a00                 push 0
// 0071503f  50                   push eax
// 00715040  ff15dcec7700         call dword ptr [0x77ecdc]
// 00715046  5e                   pop esi
// 00715047  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPScrollBar.cpp (function ?OnEnable@CXTPScrollBar@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPScrollBar.cpp
