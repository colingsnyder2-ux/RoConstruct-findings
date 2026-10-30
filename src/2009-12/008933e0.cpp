// roc 2009-12 008933e0  unit: CXTPMenuBar::CControlMDIButton  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008933e0
//
// 008933e0  56                   push esi
// 008933e1  57                   push edi
// 008933e2  6a00                 push 0
// 008933e4  8bf1                 mov esi, ecx
// 008933e6  e845f8ffff           call 0x892c30
// 008933eb  8bf8                 mov edi, eax
// 008933ed  39beac010000         cmp dword ptr [esi + 0x1ac], edi
// 008933f3  7442                 je 0x893437
// 008933f5  57                   push edi
// 008933f6  8bce                 mov ecx, esi
// 008933f8  e853ffffff           call 0x893350
// 008933fd  85c0                 test eax, eax
// 008933ff  7536                 jne 0x893437
// 00893401  8b86ac010000         mov eax, dword ptr [esi + 0x1ac]
// 00893407  85c0                 test eax, eax
// 00893409  7411                 je 0x89341c
// 0089340b  8d4e54               lea ecx, [esi + 0x54]
// 0089340e  51                   push ecx
// 0089340f  50                   push eax
// 00893410  e8cbd4fdff           call 0x8708e0
// 00893415  8bc8                 mov ecx, eax
// 00893417  e844d9fdff           call 0x870d60
// 0089341c  89beac010000         mov dword ptr [esi + 0x1ac], edi
// 00893422  85ff                 test edi, edi
// 00893424  7411                 je 0x893437
// 00893426  8d4654               lea eax, [esi + 0x54]
// 00893429  50                   push eax
// 0089342a  57                   push edi
// 0089342b  e8b0d4fdff           call 0x8708e0
// 00893430  8bc8                 mov ecx, eax
// 00893432  e849dbfdff           call 0x870f80
// 00893437  5f                   pop edi
// 00893438  5e                   pop esi
// 00893439  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ?SyncActiveMdiChild@CXTPMenuBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
