// roc 2009-06 007b6200  unit: CXTPMenuBar::CControlMDIButton  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b6200
//
// 007b6200  56                   push esi
// 007b6201  57                   push edi
// 007b6202  6a00                 push 0
// 007b6204  8bf1                 mov esi, ecx
// 007b6206  e865f8ffff           call 0x7b5a70
// 007b620b  8bf8                 mov edi, eax
// 007b620d  39beac010000         cmp dword ptr [esi + 0x1ac], edi
// 007b6213  7442                 je 0x7b6257
// 007b6215  57                   push edi
// 007b6216  8bce                 mov ecx, esi
// 007b6218  e853ffffff           call 0x7b6170
// 007b621d  85c0                 test eax, eax
// 007b621f  7536                 jne 0x7b6257
// 007b6221  8b86ac010000         mov eax, dword ptr [esi + 0x1ac]
// 007b6227  85c0                 test eax, eax
// 007b6229  7411                 je 0x7b623c
// 007b622b  8d4e54               lea ecx, [esi + 0x54]
// 007b622e  51                   push ecx
// 007b622f  50                   push eax
// 007b6230  e83bd3fdff           call 0x793570
// 007b6235  8bc8                 mov ecx, eax
// 007b6237  e8b4d7fdff           call 0x7939f0
// 007b623c  89beac010000         mov dword ptr [esi + 0x1ac], edi
// 007b6242  85ff                 test edi, edi
// 007b6244  7411                 je 0x7b6257
// 007b6246  8d4654               lea eax, [esi + 0x54]
// 007b6249  50                   push eax
// 007b624a  57                   push edi
// 007b624b  e820d3fdff           call 0x793570
// 007b6250  8bc8                 mov ecx, eax
// 007b6252  e8b9d9fdff           call 0x793c10
// 007b6257  5f                   pop edi
// 007b6258  5e                   pop esi
// 007b6259  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ?SyncActiveMdiChild@CXTPMenuBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
