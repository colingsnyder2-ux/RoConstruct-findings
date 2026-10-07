// roc 2008-06 00792a50  unit: CXTCaptionButton  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00792a50
//
// 00792a50  8b442408             mov eax, dword ptr [esp + 8]
// 00792a54  56                   push esi
// 00792a55  57                   push edi
// 00792a56  8bf1                 mov esi, ecx
// 00792a58  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00792a5c  8b5620               mov edx, dword ptr [esi + 0x20]
// 00792a5f  50                   push eax
// 00792a60  51                   push ecx
// 00792a61  6828010000           push 0x128
// 00792a66  52                   push edx
// 00792a67  ff15c42d8000         call dword ptr [0x802dc4]
// 00792a6d  6a00                 push 0
// 00792a6f  8bf8                 mov edi, eax
// 00792a71  8b4620               mov eax, dword ptr [esi + 0x20]
// 00792a74  6a00                 push 0
// 00792a76  50                   push eax
// 00792a77  ff15182e8000         call dword ptr [0x802e18]
// 00792a7d  8bc7                 mov eax, edi
// 00792a7f  5f                   pop edi
// 00792a80  5e                   pop esi
// 00792a81  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTButton.cpp (function ?OnUpdateUIState@CXTButton@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButton.cpp
