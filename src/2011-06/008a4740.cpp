// roc 2011-06 008a4740  unit: CXTPMenuBar::CControlMDIButton  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a4740
//
// 008a4740  56                   push esi
// 008a4741  57                   push edi
// 008a4742  6a00                 push 0
// 008a4744  8bf1                 mov esi, ecx
// 008a4746  e865f8ffff           call 0x8a3fb0
// 008a474b  8bf8                 mov edi, eax
// 008a474d  39beac010000         cmp dword ptr [esi + 0x1ac], edi
// 008a4753  7442                 je 0x8a4797
// 008a4755  57                   push edi
// 008a4756  8bce                 mov ecx, esi
// 008a4758  e853ffffff           call 0x8a46b0
// 008a475d  85c0                 test eax, eax
// 008a475f  7536                 jne 0x8a4797
// 008a4761  8b86ac010000         mov eax, dword ptr [esi + 0x1ac]
// 008a4767  85c0                 test eax, eax
// 008a4769  7411                 je 0x8a477c
// 008a476b  8d4e54               lea ecx, [esi + 0x54]
// 008a476e  51                   push ecx
// 008a476f  50                   push eax
// 008a4770  e8db95ffff           call 0x89dd50
// 008a4775  8bc8                 mov ecx, eax
// 008a4777  e8549affff           call 0x89e1d0
// 008a477c  89beac010000         mov dword ptr [esi + 0x1ac], edi
// 008a4782  85ff                 test edi, edi
// 008a4784  7411                 je 0x8a4797
// 008a4786  8d4654               lea eax, [esi + 0x54]
// 008a4789  50                   push eax
// 008a478a  57                   push edi
// 008a478b  e8c095ffff           call 0x89dd50
// 008a4790  8bc8                 mov ecx, eax
// 008a4792  e8599cffff           call 0x89e3f0
// 008a4797  5f                   pop edi
// 008a4798  5e                   pop esi
// 008a4799  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ?SyncActiveMdiChild@CXTPMenuBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
