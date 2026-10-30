// roc 2009-12 0083ff20  unit: CXTPCustomizeSheet  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083ff20
//
// 0083ff20  56                   push esi
// 0083ff21  6a01                 push 1
// 0083ff23  8bf1                 mov esi, ecx
// 0083ff25  e8be3bfbff           call 0x7f3ae8
// 0083ff2a  8b86b4010000         mov eax, dword ptr [esi + 0x1b4]
// 0083ff30  8b88b8000000         mov ecx, dword ptr [eax + 0xb8]
// 0083ff36  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 0083ff3c  8b5174               mov edx, dword ptr [ecx + 0x74]
// 0083ff3f  894230               mov dword ptr [edx + 0x30], eax
// 0083ff42  5e                   pop esi
// 0083ff43  e90857fdff           jmp 0x815650
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeOptionsPage.cpp (function ?OnCheckLargeicons@CXTPCustomizeOptionsPage@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeOptionsPage.cpp
