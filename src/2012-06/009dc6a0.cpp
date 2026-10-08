// roc 2012-06 009dc6a0  unit: CXTPControlTabWorkspace  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dc6a0
//
// 009dc6a0  83b90802000000       cmp dword ptr [ecx + 0x208], 0
// 009dc6a7  741f                 je 0x9dc6c8
// 009dc6a9  8b442408             mov eax, dword ptr [esp + 8]
// 009dc6ad  8b542404             mov edx, dword ptr [esp + 4]
// 009dc6b1  50                   push eax
// 009dc6b2  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 009dc6b8  52                   push edx
// 009dc6b9  8b5020               mov edx, dword ptr [eax + 0x20]
// 009dc6bc  52                   push edx
// 009dc6bd  81c178010000         add ecx, 0x178
// 009dc6c3  e898070700           call 0xa4ce60
// 009dc6c8  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnMouseMove@CXTPControlTabWorkspace@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
