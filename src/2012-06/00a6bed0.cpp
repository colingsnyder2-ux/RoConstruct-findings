// roc 2012-06 00a6bed0  unit: CXTCaptionPopupWnd  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6bed0
//
// 00a6bed0  56                   push esi
// 00a6bed1  57                   push edi
// 00a6bed2  8bf1                 mov esi, ecx
// 00a6bed4  6a5c                 push 0x5c
// 00a6bed6  33ff                 xor edi, edi
// 00a6bed8  8d4604               lea eax, [esi + 4]
// 00a6bedb  57                   push edi
// 00a6bedc  50                   push eax
// 00a6bedd  c7066c60c200         mov dword ptr [esi], 0xc2606c
// 00a6bee3  e88c74f1ff           call 0x983374
// 00a6bee8  83c40c               add esp, 0xc
// 00a6beeb  897e60               mov dword ptr [esi + 0x60], edi
// 00a6beee  897e64               mov dword ptr [esi + 0x64], edi
// 00a6bef1  897e68               mov dword ptr [esi + 0x68], edi
// 00a6bef4  897e6c               mov dword ptr [esi + 0x6c], edi
// 00a6bef7  5f                   pop edi
// 00a6bef8  c7465c01000000       mov dword ptr [esi + 0x5c], 1
// 00a6beff  8bc6                 mov eax, esi
// 00a6bf01  5e                   pop esi
// 00a6bf02  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPScrollBar.cpp (function ??0CXTPScrollBase@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPScrollBar.cpp
