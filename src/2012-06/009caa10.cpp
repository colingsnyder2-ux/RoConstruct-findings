// roc 2012-06 009caa10  unit: CXTPControlColorSelector  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009caa10
//
// 009caa10  8b8178010000         mov eax, dword ptr [ecx + 0x178]
// 009caa16  83f8ff               cmp eax, -1
// 009caa19  7410                 je 0x9caa2b
// 009caa1b  8d0440               lea eax, [eax + eax*2]
// 009caa1e  8b1485d899e500       mov edx, dword ptr [eax*4 + 0xe599d8]
// 009caa25  89917c010000         mov dword ptr [ecx + 0x17c], edx
// 009caa2b  e9a0c5fbff           jmp 0x986fd0
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?OnExecute@CXTPControlColorSelector@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
