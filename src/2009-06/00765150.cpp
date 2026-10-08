// roc 2009-06 00765150  unit: CXTPCustomizeSheet  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00765150
//
// 00765150  56                   push esi
// 00765151  6a01                 push 1
// 00765153  8bf1                 mov esi, ecx
// 00765155  e8663bfbff           call 0x718cc0
// 0076515a  8b86b4010000         mov eax, dword ptr [esi + 0x1b4]
// 00765160  8b88b8000000         mov ecx, dword ptr [eax + 0xb8]
// 00765166  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 0076516c  8b5174               mov edx, dword ptr [ecx + 0x74]
// 0076516f  894230               mov dword ptr [edx + 0x30], eax
// 00765172  5e                   pop esi
// 00765173  e92858fcff           jmp 0x72a9a0
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeOptionsPage.cpp (function ?OnCheckLargeicons@CXTPCustomizeOptionsPage@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeOptionsPage.cpp
