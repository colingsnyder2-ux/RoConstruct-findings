// roc 2012-06 009dc8d0  unit: CXTPTabClientWnd  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dc8d0
//
// 009dc8d0  53                   push ebx
// 009dc8d1  57                   push edi
// 009dc8d2  8bf9                 mov edi, ecx
// 009dc8d4  e8055efaff           call 0x9826de
// 009dc8d9  8bd8                 mov ebx, eax
// 009dc8db  85db                 test ebx, ebx
// 009dc8dd  7448                 je 0x9dc927
// 009dc8df  83bfb400000000       cmp dword ptr [edi + 0xb4], 0
// 009dc8e6  743f                 je 0x9dc927
// 009dc8e8  56                   push esi
// 009dc8e9  53                   push ebx
// 009dc8ea  e8775dfaff           call 0x982666
// 009dc8ef  8bf0                 mov esi, eax
// 009dc8f1  85f6                 test esi, esi
// 009dc8f3  7431                 je 0x9dc926
// 009dc8f5  6a00                 push 0
// 009dc8f7  6a00                 push 0
// 009dc8f9  680000c700           push 0xc70000
// 009dc8fe  8bce                 mov ecx, esi
// 009dc900  e8535ffaff           call 0x982858
// 009dc905  6a00                 push 0
// 009dc907  6a00                 push 0
// 009dc909  6800020000           push 0x200
// 009dc90e  8bce                 mov ecx, esi
// 009dc910  e89f5dfaff           call 0x9826b4
// 009dc915  6a01                 push 1
// 009dc917  6a00                 push 0
// 009dc919  6a00                 push 0
// 009dc91b  6a00                 push 0
// 009dc91d  6a00                 push 0
// 009dc91f  8bce                 mov ecx, esi
// 009dc921  e8b45bfaff           call 0x9824da
// 009dc926  5e                   pop esi
// 009dc927  8b07                 mov eax, dword ptr [edi]
// 009dc929  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 009dc92f  8bcf                 mov ecx, edi
// 009dc931  ffd2                 call edx
// 009dc933  5f                   pop edi
// 009dc934  8bc3                 mov eax, ebx
// 009dc936  5b                   pop ebx
// 009dc937  c20800               ret 8
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnMDICreate@CXTPTabClientWnd@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp
