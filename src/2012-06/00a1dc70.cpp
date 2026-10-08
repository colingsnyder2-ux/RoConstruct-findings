// roc 2012-06 00a1dc70  unit: CXTPMenuBar  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1dc70
//
// 00a1dc70  53                   push ebx
// 00a1dc71  56                   push esi
// 00a1dc72  8bf1                 mov esi, ecx
// 00a1dc74  e8d752f7ff           call 0x992f50
// 00a1dc79  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a1dc7d  8bd8                 mov ebx, eax
// 00a1dc7f  3b8eb0010000         cmp ecx, dword ptr [esi + 0x1b0]
// 00a1dc85  7506                 jne 0xa1dc8d
// 00a1dc87  8b9eb4010000         mov ebx, dword ptr [esi + 0x1b4]
// 00a1dc8d  85db                 test ebx, ebx
// 00a1dc8f  7433                 je 0xa1dcc4
// 00a1dc91  8b86b8010000         mov eax, dword ptr [esi + 0x1b8]
// 00a1dc97  85c0                 test eax, eax
// 00a1dc99  7429                 je 0xa1dcc4
// 00a1dc9b  3bc3                 cmp eax, ebx
// 00a1dc9d  7425                 je 0xa1dcc4
// 00a1dc9f  57                   push edi
// 00a1dca0  51                   push ecx
// 00a1dca1  e8c24af6ff           call 0x982768
// 00a1dca6  8bf8                 mov edi, eax
// 00a1dca8  85ff                 test edi, edi
// 00a1dcaa  7417                 je 0xa1dcc3
// 00a1dcac  8b4704               mov eax, dword ptr [edi + 4]
// 00a1dcaf  50                   push eax
// 00a1dcb0  ff15c83ab200         call dword ptr [0xb23ac8]
// 00a1dcb6  85c0                 test eax, eax
// 00a1dcb8  7409                 je 0xa1dcc3
// 00a1dcba  57                   push edi
// 00a1dcbb  53                   push ebx
// 00a1dcbc  8bce                 mov ecx, esi
// 00a1dcbe  e8fdfcffff           call 0xa1d9c0
// 00a1dcc3  5f                   pop edi
// 00a1dcc4  5e                   pop esi
// 00a1dcc5  5b                   pop ebx
// 00a1dcc6  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ?SwitchMDIMenu@CXTPMenuBar@@IAEXPAUHMENU__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
