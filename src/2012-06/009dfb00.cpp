// roc 2012-06 009dfb00  unit: CXTPTabClientWnd  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dfb00
//
// 009dfb00  56                   push esi
// 009dfb01  57                   push edi
// 009dfb02  6a01                 push 1
// 009dfb04  8bf1                 mov esi, ecx
// 009dfb06  e815e7ffff           call 0x9de220
// 009dfb0b  ff15f43bb200         call dword ptr [0xb23bf4]
// 009dfb11  50                   push eax
// 009dfb12  e84f2bfaff           call 0x982666
// 009dfb17  6a00                 push 0
// 009dfb19  8bf8                 mov edi, eax
// 009dfb1b  ff15cc3cb200         call dword ptr [0xb23ccc]
// 009dfb21  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 009dfb27  85c0                 test eax, eax
// 009dfb29  7418                 je 0x9dfb43
// 009dfb2b  8b4004               mov eax, dword ptr [eax + 4]
// 009dfb2e  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 009dfb31  50                   push eax
// 009dfb32  51                   push ecx
// 009dfb33  ff15003cb200         call dword ptr [0xb23c00]
// 009dfb39  c7861001000000000000 mov dword ptr [esi + 0x110], 0
// 009dfb43  5f                   pop edi
// 009dfb44  5e                   pop esi
// 009dfb45  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?CancelLoop@CXTPTabClientWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
