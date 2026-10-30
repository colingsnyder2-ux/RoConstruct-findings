// roc 2010-06 00808dc0  unit: CXTPControlTabWorkspace  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00808dc0
//
// 00808dc0  83b90802000000       cmp dword ptr [ecx + 0x208], 0
// 00808dc7  741f                 je 0x808de8
// 00808dc9  8b442408             mov eax, dword ptr [esp + 8]
// 00808dcd  8b542404             mov edx, dword ptr [esp + 4]
// 00808dd1  50                   push eax
// 00808dd2  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 00808dd8  52                   push edx
// 00808dd9  8b5020               mov edx, dword ptr [eax + 0x20]
// 00808ddc  52                   push edx
// 00808ddd  81c178010000         add ecx, 0x178
// 00808de3  e838ae0700           call 0x883c20
// 00808de8  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnMouseMove@CXTPControlTabWorkspace@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
