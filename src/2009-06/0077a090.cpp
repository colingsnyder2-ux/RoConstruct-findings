// roc 2009-06 0077a090  unit: CXTPControlTabWorkspace  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077a090
//
// 0077a090  8b8108020000         mov eax, dword ptr [ecx + 0x208]
// 0077a096  85c0                 test eax, eax
// 0077a098  7517                 jne 0x77a0b1
// 0077a09a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0077a09e  8b542408             mov edx, dword ptr [esp + 8]
// 0077a0a2  50                   push eax
// 0077a0a3  8b442408             mov eax, dword ptr [esp + 8]
// 0077a0a7  52                   push edx
// 0077a0a8  50                   push eax
// 0077a0a9  e8824a0400           call 0x7beb30
// 0077a0ae  c20c00               ret 0xc
// 0077a0b1  837c240400           cmp dword ptr [esp + 4], 0
// 0077a0b6  7532                 jne 0x77a0ea
// 0077a0b8  ba01000000           mov edx, 1
// 0077a0bd  89505c               mov dword ptr [eax + 0x5c], edx
// 0077a0c0  8b8108020000         mov eax, dword ptr [ecx + 0x208]
// 0077a0c6  895058               mov dword ptr [eax + 0x58], edx
// 0077a0c9  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0077a0cd  8b442408             mov eax, dword ptr [esp + 8]
// 0077a0d1  6a00                 push 0
// 0077a0d3  52                   push edx
// 0077a0d4  8b9100010000         mov edx, dword ptr [ecx + 0x100]
// 0077a0da  50                   push eax
// 0077a0db  8b4220               mov eax, dword ptr [edx + 0x20]
// 0077a0de  50                   push eax
// 0077a0df  81c178010000         add ecx, 0x178
// 0077a0e5  e866b90700           call 0x7f5a50
// 0077a0ea  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnClick@CXTPControlTabWorkspace@@MAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
