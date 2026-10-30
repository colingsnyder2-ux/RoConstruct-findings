// roc 2009-06 0080b8b0  unit: CXTCaptionButton  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080b8b0
//
// 0080b8b0  6aff                 push -1
// 0080b8b2  68881f8800           push 0x881f88
// 0080b8b7  64a100000000         mov eax, dword ptr fs:[0]
// 0080b8bd  50                   push eax
// 0080b8be  83ec48               sub esp, 0x48
// 0080b8c1  53                   push ebx
// 0080b8c2  56                   push esi
// 0080b8c3  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0080b8c8  33c4                 xor eax, esp
// 0080b8ca  50                   push eax
// 0080b8cb  8d442454             lea eax, [esp + 0x54]
// 0080b8cf  64a300000000         mov dword ptr fs:[0], eax
// 0080b8d5  8bf1                 mov esi, ecx
// 0080b8d7  8d4c2430             lea ecx, [esp + 0x30]
// 0080b8db  e8b07ef2ff           call 0x733790
// 0080b8e0  33db                 xor ebx, ebx
// 0080b8e2  8d4c240c             lea ecx, [esp + 0xc]
// 0080b8e6  895c245c             mov dword ptr [esp + 0x5c], ebx
// 0080b8ea  e8a17ef2ff           call 0x733790
// 0080b8ef  8b442468             mov eax, dword ptr [esp + 0x68]
// 0080b8f3  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0080b8f7  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 0080b8fb  6a01                 push 1
// 0080b8fd  50                   push eax
// 0080b8fe  51                   push ecx
// 0080b8ff  52                   push edx
// 0080b900  8d4c2440             lea ecx, [esp + 0x40]
// 0080b904  c644246c01           mov byte ptr [esp + 0x6c], 1
// 0080b909  e882aef2ff           call 0x736790
// 0080b90e  8d4c2430             lea ecx, [esp + 0x30]
// 0080b912  e8e97ef2ff           call 0x733800
// 0080b917  85c0                 test eax, eax
// 0080b919  7434                 je 0x80b94f
// 0080b91b  8d4c240c             lea ecx, [esp + 0xc]
// 0080b91f  885c245c             mov byte ptr [esp + 0x5c], bl
// 0080b923  e808a4f2ff           call 0x735d30
// 0080b928  8d4c2430             lea ecx, [esp + 0x30]
// 0080b92c  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 0080b934  e8f7a3f2ff           call 0x735d30
// 0080b939  33c0                 xor eax, eax
// 0080b93b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0080b93f  64890d00000000       mov dword ptr fs:[0], ecx
// 0080b946  59                   pop ecx
// 0080b947  5e                   pop esi
// 0080b948  5b                   pop ebx
// 0080b949  83c454               add esp, 0x54
// 0080b94c  c21400               ret 0x14
// 0080b94f  8b442470             mov eax, dword ptr [esp + 0x70]
// 0080b953  3bc3                 cmp eax, ebx
// 0080b955  7423                 je 0x80b97a
// 0080b957  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0080b95b  8b542464             mov edx, dword ptr [esp + 0x64]
// 0080b95f  6a01                 push 1
// 0080b961  51                   push ecx
// 0080b962  52                   push edx
// 0080b963  50                   push eax
// 0080b964  8d4c241c             lea ecx, [esp + 0x1c]
// 0080b968  e823aef2ff           call 0x736790
// 0080b96d  8d4c240c             lea ecx, [esp + 0xc]
// 0080b971  e88a7ef2ff           call 0x733800
// 0080b976  85c0                 test eax, eax
// 0080b978  75a1                 jne 0x80b91b
// 0080b97a  8b442474             mov eax, dword ptr [esp + 0x74]
// 0080b97e  50                   push eax
// 0080b97f  83ec24               sub esp, 0x24
// 0080b982  8d542434             lea edx, [esp + 0x34]
// 0080b986  8bcc                 mov ecx, esp
// 0080b988  89a42494000000       mov dword ptr [esp + 0x94], esp
// 0080b98f  52                   push edx
// 0080b990  e80b7ef2ff           call 0x7337a0
// 0080b995  83ec24               sub esp, 0x24
// 0080b998  8d44247c             lea eax, [esp + 0x7c]
// 0080b99c  8bcc                 mov ecx, esp
// 0080b99e  89a424bc000000       mov dword ptr [esp + 0xbc], esp
// 0080b9a5  50                   push eax
// 0080b9a6  c68424ac00000002     mov byte ptr [esp + 0xac], 2
// 0080b9ae  e8ed7df2ff           call 0x7337a0
// 0080b9b3  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 0080b9ba  8b9424b0000000       mov edx, dword ptr [esp + 0xb0]
// 0080b9c1  51                   push ecx
// 0080b9c2  52                   push edx
// 0080b9c3  8bce                 mov ecx, esi
// 0080b9c5  c68424b000000001     mov byte ptr [esp + 0xb0], 1
// 0080b9cd  e84efaffff           call 0x80b420
// 0080b9d2  8d4c240c             lea ecx, [esp + 0xc]
// 0080b9d6  8bf0                 mov esi, eax
// 0080b9d8  885c245c             mov byte ptr [esp + 0x5c], bl
// 0080b9dc  e84fa3f2ff           call 0x735d30
// 0080b9e1  8d4c2430             lea ecx, [esp + 0x30]
// 0080b9e5  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 0080b9ed  e83ea3f2ff           call 0x735d30
// 0080b9f2  8bc6                 mov eax, esi
// 0080b9f4  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0080b9f8  64890d00000000       mov dword ptr fs:[0], ecx
// 0080b9ff  59                   pop ecx
// 0080ba00  5e                   pop esi
// 0080ba01  5b                   pop ebx
// 0080ba02  83c454               add esp, 0x54
// 0080ba05  c21400               ret 0x14
// copied from an identical function in another client (function ?SetIcon@CXTButton@@UAEHVCSize@@PBD1H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp