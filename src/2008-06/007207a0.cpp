// roc 2008-06 007207a0  unit: CXTPMenuBar::CControlMDIButton  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007207a0
//
// 007207a0  56                   push esi
// 007207a1  57                   push edi
// 007207a2  6a00                 push 0
// 007207a4  8bf1                 mov esi, ecx
// 007207a6  e875f8ffff           call 0x720020
// 007207ab  8bf8                 mov edi, eax
// 007207ad  39beac010000         cmp dword ptr [esi + 0x1ac], edi
// 007207b3  7442                 je 0x7207f7
// 007207b5  57                   push edi
// 007207b6  8bce                 mov ecx, esi
// 007207b8  e853ffffff           call 0x720710
// 007207bd  85c0                 test eax, eax
// 007207bf  7536                 jne 0x7207f7
// 007207c1  8b86ac010000         mov eax, dword ptr [esi + 0x1ac]
// 007207c7  85c0                 test eax, eax
// 007207c9  7411                 je 0x7207dc
// 007207cb  8d4e54               lea ecx, [esi + 0x54]
// 007207ce  51                   push ecx
// 007207cf  50                   push eax
// 007207d0  e86bbfffff           call 0x71c740
// 007207d5  8bc8                 mov ecx, eax
// 007207d7  e8e4c3ffff           call 0x71cbc0
// 007207dc  89beac010000         mov dword ptr [esi + 0x1ac], edi
// 007207e2  85ff                 test edi, edi
// 007207e4  7411                 je 0x7207f7
// 007207e6  8d4654               lea eax, [esi + 0x54]
// 007207e9  50                   push eax
// 007207ea  57                   push edi
// 007207eb  e850bfffff           call 0x71c740
// 007207f0  8bc8                 mov ecx, eax
// 007207f2  e8e9c5ffff           call 0x71cde0
// 007207f7  5f                   pop edi
// 007207f8  5e                   pop esi
// 007207f9  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ?SyncActiveMdiChild@CXTPMenuBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
