// roc 2009-06 00779fc0  unit: CXTPControlTabWorkspace  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00779fc0
//
// 00779fc0  83b90802000000       cmp dword ptr [ecx + 0x208], 0
// 00779fc7  741f                 je 0x779fe8
// 00779fc9  8b442408             mov eax, dword ptr [esp + 8]
// 00779fcd  8b542404             mov edx, dword ptr [esp + 4]
// 00779fd1  50                   push eax
// 00779fd2  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 00779fd8  52                   push edx
// 00779fd9  8b5020               mov edx, dword ptr [eax + 0x20]
// 00779fdc  52                   push edx
// 00779fdd  81c178010000         add ecx, 0x178
// 00779fe3  e8a8ae0700           call 0x7f4e90
// 00779fe8  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnMouseMove@CXTPControlTabWorkspace@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
