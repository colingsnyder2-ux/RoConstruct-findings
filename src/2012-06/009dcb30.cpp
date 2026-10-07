// roc 2012-06 009dcb30  unit: CXTPTabClientWnd  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dcb30
//
// 009dcb30  53                   push ebx
// 009dcb31  8b5c2408             mov ebx, dword ptr [esp + 8]
// 009dcb35  56                   push esi
// 009dcb36  57                   push edi
// 009dcb37  8bf9                 mov edi, ecx
// 009dcb39  8bb7b8000000         mov esi, dword ptr [edi + 0xb8]
// 009dcb3f  d1ee                 shr esi, 1
// 009dcb41  f7d6                 not esi
// 009dcb43  6a02                 push 2
// 009dcb45  8bcb                 mov ecx, ebx
// 009dcb47  83e601               and esi, 1
// 009dcb4a  e891fc0600           call 0xa4c7e0
// 009dcb4f  897008               mov dword ptr [eax + 8], esi
// 009dcb52  8bb7b8000000         mov esi, dword ptr [edi + 0xb8]
// 009dcb58  d1ee                 shr esi, 1
// 009dcb5a  6a04                 push 4
// 009dcb5c  8bcb                 mov ecx, ebx
// 009dcb5e  83e602               and esi, 2
// 009dcb61  e87afc0600           call 0xa4c7e0
// 009dcb66  897008               mov dword ptr [eax + 8], esi
// 009dcb69  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 009dcb6f  8bc8                 mov ecx, eax
// 009dcb71  83e109               and ecx, 9
// 009dcb74  80f909               cmp cl, 9
// 009dcb77  7504                 jne 0x9dcb7d
// 009dcb79  33f6                 xor esi, esi
// 009dcb7b  eb0c                 jmp 0x9dcb89
// 009dcb7d  2401                 and al, 1
// 009dcb7f  0fb6f0               movzx esi, al
// 009dcb82  f7de                 neg esi
// 009dcb84  1bf6                 sbb esi, esi
// 009dcb86  83c602               add esi, 2
// 009dcb89  6a00                 push 0
// 009dcb8b  8bcb                 mov ecx, ebx
// 009dcb8d  e84efc0600           call 0xa4c7e0
// 009dcb92  897008               mov dword ptr [eax + 8], esi
// 009dcb95  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 009dcb9b  8bd0                 mov edx, eax
// 009dcb9d  83e209               and edx, 9
// 009dcba0  80fa09               cmp dl, 9
// 009dcba3  7504                 jne 0x9dcba9
// 009dcba5  33f6                 xor esi, esi
// 009dcba7  eb0c                 jmp 0x9dcbb5
// 009dcba9  2401                 and al, 1
// 009dcbab  0fb6f0               movzx esi, al
// 009dcbae  f7de                 neg esi
// 009dcbb0  1bf6                 sbb esi, esi
// 009dcbb2  83c602               add esi, 2
// 009dcbb5  6a01                 push 1
// 009dcbb7  8bcb                 mov ecx, ebx
// 009dcbb9  e822fc0600           call 0xa4c7e0
// 009dcbbe  897008               mov dword ptr [eax + 8], esi
// 009dcbc1  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 009dcbc7  a830                 test al, 0x30
// 009dcbc9  740f                 je 0x9dcbda
// 009dcbcb  2420                 and al, 0x20
// 009dcbcd  0fb6c0               movzx eax, al
// 009dcbd0  f7d8                 neg eax
// 009dcbd2  1bc0                 sbb eax, eax
// 009dcbd4  83c002               add eax, 2
// 009dcbd7  894320               mov dword ptr [ebx + 0x20], eax
// 009dcbda  5f                   pop edi
// 009dcbdb  5e                   pop esi
// 009dcbdc  5b                   pop ebx
// 009dcbdd  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?UpdateFlags@CXTPTabClientWnd@@MAEXPAVCWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
