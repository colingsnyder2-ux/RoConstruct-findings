// roc 2008-06 00792930  unit: CXTCaptionButton  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00792930
//
// 00792930  56                   push esi
// 00792931  57                   push edi
// 00792932  8bf1                 mov esi, ecx
// 00792934  e82fe3f0ff           call 0x6a0c68
// 00792939  6a00                 push 0
// 0079293b  8bf8                 mov edi, eax
// 0079293d  8b4620               mov eax, dword ptr [esi + 0x20]
// 00792940  6a00                 push 0
// 00792942  50                   push eax
// 00792943  ff15182e8000         call dword ptr [0x802e18]
// 00792949  8bc7                 mov eax, edi
// 0079294b  5f                   pop edi
// 0079294c  5e                   pop esi
// 0079294d  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTButton.cpp (function ?OnDefaultAndInvalidate@CXTButton@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButton.cpp
