// roc 2009-12 0083cbc0  unit: CXTPControlColorSelector  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083cbc0
//
// 0083cbc0  8b8178010000         mov eax, dword ptr [ecx + 0x178]
// 0083cbc6  83f8ff               cmp eax, -1
// 0083cbc9  7410                 je 0x83cbdb
// 0083cbcb  8d0440               lea eax, [eax + eax*2]
// 0083cbce  8b148550b4b900       mov edx, dword ptr [eax*4 + 0xb9b450]
// 0083cbd5  89917c010000         mov dword ptr [ecx + 0x17c], edx
// 0083cbdb  e920bafbff           jmp 0x7f8600
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?OnExecute@CXTPControlColorSelector@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
