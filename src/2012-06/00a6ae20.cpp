// from server: 100% by auto
// roc 2012-06 00a6ae20  unit: CXTCaptionButton  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6ae20
//
// 00a6ae20  8b442408             mov eax, dword ptr [esp + 8]
// 00a6ae24  56                   push esi
// 00a6ae25  57                   push edi
// 00a6ae26  8bf1                 mov esi, ecx
// 00a6ae28  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a6ae2c  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a6ae2f  50                   push eax
// 00a6ae30  51                   push ecx
// 00a6ae31  6828010000           push 0x128
// 00a6ae36  52                   push edx
// 00a6ae37  ff15b43ab200         call dword ptr [0xb23ab4]
// 00a6ae3d  6a00                 push 0
// 00a6ae3f  8bf8                 mov edi, eax
// 00a6ae41  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a6ae44  6a00                 push 0
// 00a6ae46  50                   push eax
// 00a6ae47  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a6ae4d  8bc7                 mov eax, edi
// 00a6ae4f  5f                   pop edi
// 00a6ae50  5e                   pop esi
// 00a6ae51  c20800               ret 8
// library xtp-15.2.1/Source\Controls\Deprecated\XTButton.cpp (function ?OnUpdateUIState@CXTButton@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButton.cpp
