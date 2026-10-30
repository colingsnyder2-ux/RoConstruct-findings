// roc 2011-06 00852560  unit: CXTPControlColorSelector  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00852560
//
// 00852560  8b8178010000         mov eax, dword ptr [ecx + 0x178]
// 00852566  83f8ff               cmp eax, -1
// 00852569  7410                 je 0x85257b
// 0085256b  8d0440               lea eax, [eax + eax*2]
// 0085256e  8b14856888d100       mov edx, dword ptr [eax*4 + 0xd18868]
// 00852575  89917c010000         mov dword ptr [ecx + 0x17c], edx
// 0085257b  e940c7fbff           jmp 0x80ecc0
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?OnExecute@CXTPControlColorSelector@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
