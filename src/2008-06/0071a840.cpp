// roc 2008-06 0071a840  unit: CXTPDockBar  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071a840
//
// 0071a840  8b442404             mov eax, dword ptr [esp + 4]
// 0071a844  56                   push esi
// 0071a845  57                   push edi
// 0071a846  50                   push eax
// 0071a847  8bf1                 mov esi, ecx
// 0071a849  e8da170a00           call 0x7bc028
// 0071a84e  8bf8                 mov edi, eax
// 0071a850  85ff                 test edi, edi
// 0071a852  7416                 je 0x71a86a
// 0071a854  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0071a857  e80487f8ff           call 0x6a2f60
// 0071a85c  8b10                 mov edx, dword ptr [eax]
// 0071a85e  56                   push esi
// 0071a85f  8bc8                 mov ecx, eax
// 0071a861  8b82a4000000         mov eax, dword ptr [edx + 0xa4]
// 0071a867  57                   push edi
// 0071a868  ffd0                 call eax
// 0071a86a  5f                   pop edi
// 0071a86b  b801000000           mov eax, 1
// 0071a870  5e                   pop esi
// 0071a871  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPDockBar.cpp (function ?OnPrintClient@CXTPDockBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockBar.cpp
