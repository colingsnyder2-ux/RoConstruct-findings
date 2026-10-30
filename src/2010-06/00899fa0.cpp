// roc 2010-06 00899fa0  unit: CXTCaptionButton  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00899fa0
//
// 00899fa0  8b442408             mov eax, dword ptr [esp + 8]
// 00899fa4  56                   push esi
// 00899fa5  57                   push edi
// 00899fa6  8bf1                 mov esi, ecx
// 00899fa8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00899fac  8b5620               mov edx, dword ptr [esi + 0x20]
// 00899faf  50                   push eax
// 00899fb0  51                   push ecx
// 00899fb1  6a0c                 push 0xc
// 00899fb3  52                   push edx
// 00899fb4  ff157cbb9e00         call dword ptr [0x9ebb7c]
// 00899fba  6a00                 push 0
// 00899fbc  8bf8                 mov edi, eax
// 00899fbe  8b4620               mov eax, dword ptr [esi + 0x20]
// 00899fc1  6a00                 push 0
// 00899fc3  50                   push eax
// 00899fc4  ff1578ba9e00         call dword ptr [0x9eba78]
// 00899fca  8bc7                 mov eax, edi
// 00899fcc  5f                   pop edi
// 00899fcd  5e                   pop esi
// 00899fce  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTButton.cpp (function ?OnSetText@CXTButton@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButton.cpp
