// from server: 100% by auto
// roc 2008-06 006ec760  unit: CXTPCustomizeSheet  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ec760
//
// 006ec760  56                   push esi
// 006ec761  6a01                 push 1
// 006ec763  8bf1                 mov esi, ecx
// 006ec765  e8a441fbff           call 0x6a090e
// 006ec76a  8b86b4010000         mov eax, dword ptr [esi + 0x1b4]
// 006ec770  8b88b8000000         mov ecx, dword ptr [eax + 0xb8]
// 006ec776  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 006ec77c  8b5174               mov edx, dword ptr [ecx + 0x74]
// 006ec77f  894230               mov dword ptr [edx + 0x30], eax
// 006ec782  5e                   pop esi
// 006ec783  e93879fbff           jmp 0x6a40c0
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeOptionsPage.cpp (function ?OnCheckLargeicons@CXTPCustomizeOptionsPage@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeOptionsPage.cpp
