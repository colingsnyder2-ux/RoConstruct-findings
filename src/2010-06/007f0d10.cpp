// roc 2010-06 007f0d10  unit: CXTPControlColorSelector  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f0d10
//
// 007f0d10  8b8178010000         mov eax, dword ptr [ecx + 0x178]
// 007f0d16  83f8ff               cmp eax, -1
// 007f0d19  7410                 je 0x7f0d2b
// 007f0d1b  8d0440               lea eax, [eax + eax*2]
// 007f0d1e  8b1485805bc200       mov edx, dword ptr [eax*4 + 0xc25b80]
// 007f0d25  89917c010000         mov dword ptr [ecx + 0x17c], edx
// 007f0d2b  e9b0bafbff           jmp 0x7ac7e0
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?OnExecute@CXTPControlColorSelector@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
