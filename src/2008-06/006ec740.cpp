// from server: 100% by auto
// roc 2008-06 006ec740  unit: CXTPCustomizeSheet  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ec740
//
// 006ec740  56                   push esi
// 006ec741  6a01                 push 1
// 006ec743  8bf1                 mov esi, ecx
// 006ec745  e8c441fbff           call 0x6a090e
// 006ec74a  8bce                 mov ecx, esi
// 006ec74c  e85fffffff           call 0x6ec6b0
// 006ec751  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 006ec757  8b4074               mov eax, dword ptr [eax + 0x74]
// 006ec75a  894824               mov dword ptr [eax + 0x24], ecx
// 006ec75d  5e                   pop esi
// 006ec75e  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeOptionsPage.cpp (function ?OnCheckAfterdelay@CXTPCustomizeOptionsPage@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeOptionsPage.cpp
