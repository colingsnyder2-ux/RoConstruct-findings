// roc 2009-12 00854d40  unit: CXTPControlTabWorkspace  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00854d40
//
// 00854d40  83b90802000000       cmp dword ptr [ecx + 0x208], 0
// 00854d47  741f                 je 0x854d68
// 00854d49  8b442408             mov eax, dword ptr [esp + 8]
// 00854d4d  8b542404             mov edx, dword ptr [esp + 4]
// 00854d51  50                   push eax
// 00854d52  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 00854d58  52                   push edx
// 00854d59  8b5020               mov edx, dword ptr [eax + 0x20]
// 00854d5c  52                   push edx
// 00854d5d  81c178010000         add ecx, 0x178
// 00854d63  e8d8ac0700           call 0x8cfa40
// 00854d68  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnMouseMove@CXTPControlTabWorkspace@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
