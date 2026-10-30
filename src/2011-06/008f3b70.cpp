// roc 2011-06 008f3b70  unit: CXTCaptionPopupWnd  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f3b70
//
// 008f3b70  56                   push esi
// 008f3b71  57                   push edi
// 008f3b72  8bf1                 mov esi, ecx
// 008f3b74  6a5c                 push 0x5c
// 008f3b76  33ff                 xor edi, edi
// 008f3b78  8d4604               lea eax, [esi + 4]
// 008f3b7b  57                   push edi
// 008f3b7c  50                   push eax
// 008f3b7d  c706d4a9ad00         mov dword ptr [esi], 0xada9d4
// 008f3b83  e85c77f1ff           call 0x80b2e4
// 008f3b88  83c40c               add esp, 0xc
// 008f3b8b  897e60               mov dword ptr [esi + 0x60], edi
// 008f3b8e  897e64               mov dword ptr [esi + 0x64], edi
// 008f3b91  897e68               mov dword ptr [esi + 0x68], edi
// 008f3b94  897e6c               mov dword ptr [esi + 0x6c], edi
// 008f3b97  5f                   pop edi
// 008f3b98  c7465c01000000       mov dword ptr [esi + 0x5c], 1
// 008f3b9f  8bc6                 mov eax, esi
// 008f3ba1  5e                   pop esi
// 008f3ba2  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPScrollBar.cpp (function ??0CXTPScrollBase@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPScrollBar.cpp
