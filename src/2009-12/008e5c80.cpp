// roc 2009-12 008e5c80  unit: CXTCaptionButton  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e5c80
//
// 008e5c80  8b442408             mov eax, dword ptr [esp + 8]
// 008e5c84  56                   push esi
// 008e5c85  57                   push edi
// 008e5c86  8bf1                 mov esi, ecx
// 008e5c88  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e5c8c  8b5620               mov edx, dword ptr [esi + 0x20]
// 008e5c8f  50                   push eax
// 008e5c90  51                   push ecx
// 008e5c91  6a0c                 push 0xc
// 008e5c93  52                   push edx
// 008e5c94  ff15dcc99800         call dword ptr [0x98c9dc]
// 008e5c9a  6a00                 push 0
// 008e5c9c  8bf8                 mov edi, eax
// 008e5c9e  8b4620               mov eax, dword ptr [esi + 0x20]
// 008e5ca1  6a00                 push 0
// 008e5ca3  50                   push eax
// 008e5ca4  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008e5caa  8bc7                 mov eax, edi
// 008e5cac  5f                   pop edi
// 008e5cad  5e                   pop esi
// 008e5cae  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTButton.cpp (function ?OnSetText@CXTButton@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButton.cpp
