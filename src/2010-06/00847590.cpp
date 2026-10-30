// roc 2010-06 00847590  unit: CXTPMenuBar::CControlMDIButton  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00847590
//
// 00847590  56                   push esi
// 00847591  57                   push edi
// 00847592  6a00                 push 0
// 00847594  8bf1                 mov esi, ecx
// 00847596  e875f8ffff           call 0x846e10
// 0084759b  8bf8                 mov edi, eax
// 0084759d  39beac010000         cmp dword ptr [esi + 0x1ac], edi
// 008475a3  7442                 je 0x8475e7
// 008475a5  57                   push edi
// 008475a6  8bce                 mov ecx, esi
// 008475a8  e853ffffff           call 0x847500
// 008475ad  85c0                 test eax, eax
// 008475af  7536                 jne 0x8475e7
// 008475b1  8b86ac010000         mov eax, dword ptr [esi + 0x1ac]
// 008475b7  85c0                 test eax, eax
// 008475b9  7411                 je 0x8475cc
// 008475bb  8d4e54               lea ecx, [esi + 0x54]
// 008475be  51                   push ecx
// 008475bf  50                   push eax
// 008475c0  e80b98ffff           call 0x840dd0
// 008475c5  8bc8                 mov ecx, eax
// 008475c7  e8849cffff           call 0x841250
// 008475cc  89beac010000         mov dword ptr [esi + 0x1ac], edi
// 008475d2  85ff                 test edi, edi
// 008475d4  7411                 je 0x8475e7
// 008475d6  8d4654               lea eax, [esi + 0x54]
// 008475d9  50                   push eax
// 008475da  57                   push edi
// 008475db  e8f097ffff           call 0x840dd0
// 008475e0  8bc8                 mov ecx, eax
// 008475e2  e8899effff           call 0x841470
// 008475e7  5f                   pop edi
// 008475e8  5e                   pop esi
// 008475e9  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ?SyncActiveMdiChild@CXTPMenuBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
