// roc 2011-06 008f2b00  unit: CXTCaptionButton  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f2b00
//
// 008f2b00  8b442408             mov eax, dword ptr [esp + 8]
// 008f2b04  56                   push esi
// 008f2b05  57                   push edi
// 008f2b06  8bf1                 mov esi, ecx
// 008f2b08  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f2b0c  8b5620               mov edx, dword ptr [esi + 0x20]
// 008f2b0f  50                   push eax
// 008f2b10  51                   push ecx
// 008f2b11  6a0c                 push 0xc
// 008f2b13  52                   push edx
// 008f2b14  ff15a01ca400         call dword ptr [0xa41ca0]
// 008f2b1a  6a00                 push 0
// 008f2b1c  8bf8                 mov edi, eax
// 008f2b1e  8b4620               mov eax, dword ptr [esi + 0x20]
// 008f2b21  6a00                 push 0
// 008f2b23  50                   push eax
// 008f2b24  ff15ec19a400         call dword ptr [0xa419ec]
// 008f2b2a  8bc7                 mov eax, edi
// 008f2b2c  5f                   pop edi
// 008f2b2d  5e                   pop esi
// 008f2b2e  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTButton.cpp (function ?OnSetText@CXTButton@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButton.cpp
