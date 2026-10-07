// roc 2008-06 006e94e0  unit: CXTPControlColorSelector  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e94e0
//
// 006e94e0  8b8178010000         mov eax, dword ptr [ecx + 0x178]
// 006e94e6  83f8ff               cmp eax, -1
// 006e94e9  7410                 je 0x6e94fb
// 006e94eb  8d0440               lea eax, [eax + eax*2]
// 006e94ee  8b148500e79700       mov edx, dword ptr [eax*4 + 0x97e700]
// 006e94f5  89917c010000         mov dword ptr [ecx + 0x17c], edx
// 006e94fb  e9b042fcff           jmp 0x6ad7b0
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?OnExecute@CXTPControlColorSelector@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
