// roc 2011-06 008a22d0  unit: CXTPDockBar  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a22d0
//
// 008a22d0  8b442404             mov eax, dword ptr [esp + 4]
// 008a22d4  56                   push esi
// 008a22d5  57                   push edi
// 008a22d6  50                   push eax
// 008a22d7  8bf1                 mov esi, ecx
// 008a22d9  e8daa21200           call 0x9cc5b8
// 008a22de  8bf8                 mov edi, eax
// 008a22e0  85ff                 test edi, edi
// 008a22e2  7416                 je 0x8a22fa
// 008a22e4  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008a22e7  e8447ff8ff           call 0x82a230
// 008a22ec  8b10                 mov edx, dword ptr [eax]
// 008a22ee  56                   push esi
// 008a22ef  8bc8                 mov ecx, eax
// 008a22f1  8b82a4000000         mov eax, dword ptr [edx + 0xa4]
// 008a22f7  57                   push edi
// 008a22f8  ffd0                 call eax
// 008a22fa  5f                   pop edi
// 008a22fb  b801000000           mov eax, 1
// 008a2300  5e                   pop esi
// 008a2301  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPDockBar.cpp (function ?OnPrintClient@CXTPDockBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockBar.cpp
