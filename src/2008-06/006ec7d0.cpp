// roc 2008-06 006ec7d0  unit: CXTPCustomizeSheet  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ec7d0
//
// 006ec7d0  56                   push esi
// 006ec7d1  6a01                 push 1
// 006ec7d3  8bf1                 mov esi, ecx
// 006ec7d5  e83441fbff           call 0x6a090e
// 006ec7da  8bce                 mov ecx, esi
// 006ec7dc  e8cffeffff           call 0x6ec6b0
// 006ec7e1  8b8e98000000         mov ecx, dword ptr [esi + 0x98]
// 006ec7e7  8b4074               mov eax, dword ptr [eax + 0x74]
// 006ec7ea  89482c               mov dword ptr [eax + 0x2c], ecx
// 006ec7ed  5e                   pop esi
// 006ec7ee  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeOptionsPage.cpp (function ?OnCheckShortcuts@CXTPCustomizeOptionsPage@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeOptionsPage.cpp
