// from server: 100% by auto
// roc 2007-08 006a6100  unit: CXTPMenuBar::CControlMDIButton  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a6100
//
// 006a6100  56                   push esi
// 006a6101  57                   push edi
// 006a6102  6a00                 push 0
// 006a6104  8bf1                 mov esi, ecx
// 006a6106  e895f8ffff           call 0x6a59a0
// 006a610b  8bf8                 mov edi, eax
// 006a610d  39beac010000         cmp dword ptr [esi + 0x1ac], edi
// 006a6113  7442                 je 0x6a6157
// 006a6115  57                   push edi
// 006a6116  8bce                 mov ecx, esi
// 006a6118  e853ffffff           call 0x6a6070
// 006a611d  85c0                 test eax, eax
// 006a611f  7536                 jne 0x6a6157
// 006a6121  8b86ac010000         mov eax, dword ptr [esi + 0x1ac]
// 006a6127  85c0                 test eax, eax
// 006a6129  7411                 je 0x6a613c
// 006a612b  8d4e54               lea ecx, [esi + 0x54]
// 006a612e  51                   push ecx
// 006a612f  50                   push eax
// 006a6130  e80bcfffff           call 0x6a3040
// 006a6135  8bc8                 mov ecx, eax
// 006a6137  e8d4d3ffff           call 0x6a3510
// 006a613c  85ff                 test edi, edi
// 006a613e  89beac010000         mov dword ptr [esi + 0x1ac], edi
// 006a6144  7411                 je 0x6a6157
// 006a6146  83c654               add esi, 0x54
// 006a6149  56                   push esi
// 006a614a  57                   push edi
// 006a614b  e8f0ceffff           call 0x6a3040
// 006a6150  8bc8                 mov ecx, eax
// 006a6152  e8a9d5ffff           call 0x6a3700
// 006a6157  5f                   pop edi
// 006a6158  5e                   pop esi
// 006a6159  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPMenuBar.cpp (function ?SyncActiveMdiChild@CXTPMenuBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPMenuBar.cpp
