// roc 2010-06 007f3fe0  unit: CXTPCustomizeSheet  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f3fe0
//
// 007f3fe0  56                   push esi
// 007f3fe1  6a01                 push 1
// 007f3fe3  8bf1                 mov esi, ecx
// 007f3fe5  e83e3cfbff           call 0x7a7c28
// 007f3fea  8b86b4010000         mov eax, dword ptr [esi + 0x1b4]
// 007f3ff0  8b88b8000000         mov ecx, dword ptr [eax + 0xb8]
// 007f3ff6  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 007f3ffc  8b5174               mov edx, dword ptr [ecx + 0x74]
// 007f3fff  894230               mov dword ptr [edx + 0x30], eax
// 007f4002  5e                   pop esi
// 007f4003  e91857fdff           jmp 0x7c9720
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeOptionsPage.cpp (function ?OnCheckLargeicons@CXTPCustomizeOptionsPage@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeOptionsPage.cpp
