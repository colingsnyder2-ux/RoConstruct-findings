// roc 2012-06 00a1cb80  unit: CXTPMenuBar::CControlMDIButton  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1cb80
//
// 00a1cb80  56                   push esi
// 00a1cb81  57                   push edi
// 00a1cb82  6a00                 push 0
// 00a1cb84  8bf1                 mov esi, ecx
// 00a1cb86  e855f8ffff           call 0xa1c3e0
// 00a1cb8b  8bf8                 mov edi, eax
// 00a1cb8d  39beac010000         cmp dword ptr [esi + 0x1ac], edi
// 00a1cb93  7442                 je 0xa1cbd7
// 00a1cb95  57                   push edi
// 00a1cb96  8bce                 mov ecx, esi
// 00a1cb98  e853ffffff           call 0xa1caf0
// 00a1cb9d  85c0                 test eax, eax
// 00a1cb9f  7536                 jne 0xa1cbd7
// 00a1cba1  8b86ac010000         mov eax, dword ptr [esi + 0x1ac]
// 00a1cba7  85c0                 test eax, eax
// 00a1cba9  7411                 je 0xa1cbbc
// 00a1cbab  8d4e54               lea ecx, [esi + 0x54]
// 00a1cbae  51                   push ecx
// 00a1cbaf  50                   push eax
// 00a1cbb0  e8bb97ffff           call 0xa16370
// 00a1cbb5  8bc8                 mov ecx, eax
// 00a1cbb7  e8349cffff           call 0xa167f0
// 00a1cbbc  89beac010000         mov dword ptr [esi + 0x1ac], edi
// 00a1cbc2  85ff                 test edi, edi
// 00a1cbc4  7411                 je 0xa1cbd7
// 00a1cbc6  8d4654               lea eax, [esi + 0x54]
// 00a1cbc9  50                   push eax
// 00a1cbca  57                   push edi
// 00a1cbcb  e8a097ffff           call 0xa16370
// 00a1cbd0  8bc8                 mov ecx, eax
// 00a1cbd2  e8399effff           call 0xa16a10
// 00a1cbd7  5f                   pop edi
// 00a1cbd8  5e                   pop esi
// 00a1cbd9  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ?SyncActiveMdiChild@CXTPMenuBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
