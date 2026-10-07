// roc 2007-08 00715050  unit: CXTCaptionButton  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00715050
//
// 00715050  56                   push esi
// 00715051  57                   push edi
// 00715052  8bf1                 mov esi, ecx
// 00715054  e8e5b1f1ff           call 0x63023e
// 00715059  6a00                 push 0
// 0071505b  8bf8                 mov edi, eax
// 0071505d  8b4620               mov eax, dword ptr [esi + 0x20]
// 00715060  6a00                 push 0
// 00715062  50                   push eax
// 00715063  ff15dcec7700         call dword ptr [0x77ecdc]
// 00715069  8bc7                 mov eax, edi
// 0071506b  5f                   pop edi
// 0071506c  5e                   pop esi
// 0071506d  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Controls\XTButton.cpp (function ?OnDefaultAndInvalidate@CXTButton@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTButton.cpp
