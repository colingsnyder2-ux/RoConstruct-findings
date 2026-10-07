// roc 2007-08 00715010  unit: CXTCaptionButton  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00715010
//
// 00715010  8b442404             mov eax, dword ptr [esp + 4]
// 00715014  56                   push esi
// 00715015  50                   push eax
// 00715016  8bf1                 mov esi, ecx
// 00715018  e805b9f1ff           call 0x630922
// 0071501d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00715020  6a00                 push 0
// 00715022  6a00                 push 0
// 00715024  51                   push ecx
// 00715025  ff15dcec7700         call dword ptr [0x77ecdc]
// 0071502b  5e                   pop esi
// 0071502c  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTButton.cpp (function ?OnSetFocus@CXTButton@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTButton.cpp
