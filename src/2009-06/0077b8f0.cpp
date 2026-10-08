// roc 2009-06 0077b8f0  unit: CXTPTabClientWnd  size: 218 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077b8f0
//
// 0077b8f0  83ec1c               sub esp, 0x1c
// 0077b8f3  53                   push ebx
// 0077b8f4  56                   push esi
// 0077b8f5  57                   push edi
// 0077b8f6  8b3d40ee8900         mov edi, dword ptr [0x89ee40]
// 0077b8fc  6a00                 push 0
// 0077b8fe  6a0f                 push 0xf
// 0077b900  6a0f                 push 0xf
// 0077b902  6a00                 push 0
// 0077b904  8d44241c             lea eax, [esp + 0x1c]
// 0077b908  50                   push eax
// 0077b909  8bf1                 mov esi, ecx
// 0077b90b  ffd7                 call edi
// 0077b90d  85c0                 test eax, eax
// 0077b90f  7439                 je 0x77b94a
// 0077b911  8b1d4ced8900         mov ebx, dword ptr [0x89ed4c]
// 0077b917  6a0f                 push 0xf
// 0077b919  6a0f                 push 0xf
// 0077b91b  6a00                 push 0
// 0077b91d  8d4c2418             lea ecx, [esp + 0x18]
// 0077b921  51                   push ecx
// 0077b922  ff15d8ee8900         call dword ptr [0x89eed8]
// 0077b928  85c0                 test eax, eax
// 0077b92a  0f8493000000         je 0x77b9c3
// 0077b930  8d54240c             lea edx, [esp + 0xc]
// 0077b934  52                   push edx
// 0077b935  ffd3                 call ebx
// 0077b937  6a00                 push 0
// 0077b939  6a0f                 push 0xf
// 0077b93b  6a0f                 push 0xf
// 0077b93d  6a00                 push 0
// 0077b93f  8d44241c             lea eax, [esp + 0x1c]
// 0077b943  50                   push eax
// 0077b944  ffd7                 call edi
// 0077b946  85c0                 test eax, eax
// 0077b948  75cd                 jne 0x77b917
// 0077b94a  8b3dc8ee8900         mov edi, dword ptr [0x89eec8]
// 0077b950  8d8ef8000000         lea ecx, [esi + 0xf8]
// 0077b956  51                   push ecx
// 0077b957  ffd7                 call edi
// 0077b959  8d96dc000000         lea edx, [esi + 0xdc]
// 0077b95f  52                   push edx
// 0077b960  c7860c01000000000000 mov dword ptr [esi + 0x10c], 0
// 0077b96a  c7860801000000000000 mov dword ptr [esi + 0x108], 0
// 0077b974  ffd7                 call edi
// 0077b976  c786f000000000000000 mov dword ptr [esi + 0xf0], 0
// 0077b980  ff15e8ec8900         call dword ptr [0x89ece8]
// 0077b986  50                   push eax
// 0077b987  e876d3f9ff           call 0x718d02
// 0077b98c  8bf8                 mov edi, eax
// 0077b98e  8b4720               mov eax, dword ptr [edi + 0x20]
// 0077b991  50                   push eax
// 0077b992  ff15d4ee8900         call dword ptr [0x89eed4]
// 0077b998  85c0                 test eax, eax
// 0077b99a  740d                 je 0x77b9a9
// 0077b99c  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0077b99f  6803040000           push 0x403
// 0077b9a4  6a00                 push 0
// 0077b9a6  51                   push ecx
// 0077b9a7  eb08                 jmp 0x77b9b1
// 0077b9a9  8b5720               mov edx, dword ptr [edi + 0x20]
// 0077b9ac  6a03                 push 3
// 0077b9ae  6a00                 push 0
// 0077b9b0  52                   push edx
// 0077b9b1  ff15d0ee8900         call dword ptr [0x89eed0]
// 0077b9b7  50                   push eax
// 0077b9b8  e84f050d00           call 0x84bf0c
// 0077b9bd  898610010000         mov dword ptr [esi + 0x110], eax
// 0077b9c3  5f                   pop edi
// 0077b9c4  5e                   pop esi
// 0077b9c5  5b                   pop ebx
// 0077b9c6  83c41c               add esp, 0x1c
// 0077b9c9  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?InitLoop@CXTPTabClientWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
