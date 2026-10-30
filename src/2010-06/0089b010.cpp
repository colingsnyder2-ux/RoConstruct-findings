// roc 2010-06 0089b010  unit: CXTCaptionPopupWnd  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089b010
//
// 0089b010  56                   push esi
// 0089b011  57                   push edi
// 0089b012  8bf1                 mov esi, ecx
// 0089b014  6a5c                 push 0x5c
// 0089b016  33ff                 xor edi, edi
// 0089b018  8d4604               lea eax, [esi + 4]
// 0089b01b  57                   push edi
// 0089b01c  50                   push eax
// 0089b01d  c706ac0ea700         mov dword ptr [esi], 0xa70eac
// 0089b023  e8bcdbf0ff           call 0x7a8be4
// 0089b028  83c40c               add esp, 0xc
// 0089b02b  897e60               mov dword ptr [esi + 0x60], edi
// 0089b02e  897e64               mov dword ptr [esi + 0x64], edi
// 0089b031  897e68               mov dword ptr [esi + 0x68], edi
// 0089b034  897e6c               mov dword ptr [esi + 0x6c], edi
// 0089b037  5f                   pop edi
// 0089b038  c7465c01000000       mov dword ptr [esi + 0x5c], 1
// 0089b03f  8bc6                 mov eax, esi
// 0089b041  5e                   pop esi
// 0089b042  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPScrollBar.cpp (function ??0CXTPScrollBase@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPScrollBar.cpp
