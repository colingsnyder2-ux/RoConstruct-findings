// roc 2009-06 00761de0  unit: CXTPControlColorSelector  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00761de0
//
// 00761de0  8b8178010000         mov eax, dword ptr [ecx + 0x178]
// 00761de6  83f8ff               cmp eax, -1
// 00761de9  7410                 je 0x761dfb
// 00761deb  8d0440               lea eax, [eax + eax*2]
// 00761dee  8b1485f81fa500       mov edx, dword ptr [eax*4 + 0xa51ff8]
// 00761df5  89917c010000         mov dword ptr [ecx + 0x17c], edx
// 00761dfb  e9c000fcff           jmp 0x721ec0
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?OnExecute@CXTPControlColorSelector@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
