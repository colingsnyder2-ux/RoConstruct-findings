// roc 2011-06 008f2ac0  unit: CXTCaptionButton  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f2ac0
//
// 008f2ac0  8b442408             mov eax, dword ptr [esp + 8]
// 008f2ac4  56                   push esi
// 008f2ac5  57                   push edi
// 008f2ac6  8bf1                 mov esi, ecx
// 008f2ac8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f2acc  8b5620               mov edx, dword ptr [esi + 0x20]
// 008f2acf  50                   push eax
// 008f2ad0  51                   push ecx
// 008f2ad1  6828010000           push 0x128
// 008f2ad6  52                   push edx
// 008f2ad7  ff15a01ca400         call dword ptr [0xa41ca0]
// 008f2add  6a00                 push 0
// 008f2adf  8bf8                 mov edi, eax
// 008f2ae1  8b4620               mov eax, dword ptr [esi + 0x20]
// 008f2ae4  6a00                 push 0
// 008f2ae6  50                   push eax
// 008f2ae7  ff15ec19a400         call dword ptr [0xa419ec]
// 008f2aed  8bc7                 mov eax, edi
// 008f2aef  5f                   pop edi
// 008f2af0  5e                   pop esi
// 008f2af1  c20800               ret 8
// library xtp-15.2.1/Source\Controls\Deprecated\XTButton.cpp (function ?OnUpdateUIState@CXTButton@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButton.cpp
