// roc 2011-06 008642b0  unit: CXTPControlTabWorkspace  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008642b0
//
// 008642b0  83b90802000000       cmp dword ptr [ecx + 0x208], 0
// 008642b7  741f                 je 0x8642d8
// 008642b9  8b442408             mov eax, dword ptr [esp + 8]
// 008642bd  8b542404             mov edx, dword ptr [esp + 4]
// 008642c1  50                   push eax
// 008642c2  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 008642c8  52                   push edx
// 008642c9  8b5020               mov edx, dword ptr [eax + 0x20]
// 008642cc  52                   push edx
// 008642cd  81c178010000         add ecx, 0x178
// 008642d3  e838080700           call 0x8d4b10
// 008642d8  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnMouseMove@CXTPControlTabWorkspace@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
