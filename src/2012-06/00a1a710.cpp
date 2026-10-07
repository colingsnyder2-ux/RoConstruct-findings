// roc 2012-06 00a1a710  unit: CXTPDockBar  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1a710
//
// 00a1a710  8b442404             mov eax, dword ptr [esp + 4]
// 00a1a714  56                   push esi
// 00a1a715  57                   push edi
// 00a1a716  50                   push eax
// 00a1a717  8bf1                 mov esi, ecx
// 00a1a719  e854ee0700           call 0xa99572
// 00a1a71e  8bf8                 mov edi, eax
// 00a1a720  85ff                 test edi, edi
// 00a1a722  7416                 je 0xa1a73a
// 00a1a724  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 00a1a727  e83481f8ff           call 0x9a2860
// 00a1a72c  8b10                 mov edx, dword ptr [eax]
// 00a1a72e  56                   push esi
// 00a1a72f  8bc8                 mov ecx, eax
// 00a1a731  8b82a4000000         mov eax, dword ptr [edx + 0xa4]
// 00a1a737  57                   push edi
// 00a1a738  ffd0                 call eax
// 00a1a73a  5f                   pop edi
// 00a1a73b  b801000000           mov eax, 1
// 00a1a740  5e                   pop esi
// 00a1a741  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPDockBar.cpp (function ?OnPrintClient@CXTPDockBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockBar.cpp
