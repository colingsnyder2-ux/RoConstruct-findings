// roc 2008-06 00792a90  unit: CXTCaptionButton  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00792a90
//
// 00792a90  8b442408             mov eax, dword ptr [esp + 8]
// 00792a94  56                   push esi
// 00792a95  57                   push edi
// 00792a96  8bf1                 mov esi, ecx
// 00792a98  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00792a9c  8b5620               mov edx, dword ptr [esi + 0x20]
// 00792a9f  50                   push eax
// 00792aa0  51                   push ecx
// 00792aa1  6a0c                 push 0xc
// 00792aa3  52                   push edx
// 00792aa4  ff15c42d8000         call dword ptr [0x802dc4]
// 00792aaa  6a00                 push 0
// 00792aac  8bf8                 mov edi, eax
// 00792aae  8b4620               mov eax, dword ptr [esi + 0x20]
// 00792ab1  6a00                 push 0
// 00792ab3  50                   push eax
// 00792ab4  ff15182e8000         call dword ptr [0x802e18]
// 00792aba  8bc7                 mov eax, edi
// 00792abc  5f                   pop edi
// 00792abd  5e                   pop esi
// 00792abe  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTButton.cpp (function ?OnSetText@CXTButton@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButton.cpp
