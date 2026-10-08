// roc 2012-06 00a6ae60  unit: CXTCaptionButton  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6ae60
//
// 00a6ae60  8b442408             mov eax, dword ptr [esp + 8]
// 00a6ae64  56                   push esi
// 00a6ae65  57                   push edi
// 00a6ae66  8bf1                 mov esi, ecx
// 00a6ae68  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a6ae6c  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a6ae6f  50                   push eax
// 00a6ae70  51                   push ecx
// 00a6ae71  6a0c                 push 0xc
// 00a6ae73  52                   push edx
// 00a6ae74  ff15b43ab200         call dword ptr [0xb23ab4]
// 00a6ae7a  6a00                 push 0
// 00a6ae7c  8bf8                 mov edi, eax
// 00a6ae7e  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a6ae81  6a00                 push 0
// 00a6ae83  50                   push eax
// 00a6ae84  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a6ae8a  8bc7                 mov eax, edi
// 00a6ae8c  5f                   pop edi
// 00a6ae8d  5e                   pop esi
// 00a6ae8e  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTButton.cpp (function ?OnSetText@CXTButton@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButton.cpp
