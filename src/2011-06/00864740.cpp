// from server: 100% by auto
// roc 2011-06 00864740  unit: CXTPTabClientWnd  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00864740
//
// 00864740  53                   push ebx
// 00864741  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00864745  56                   push esi
// 00864746  57                   push edi
// 00864747  8bf9                 mov edi, ecx
// 00864749  8bb7b8000000         mov esi, dword ptr [edi + 0xb8]
// 0086474f  d1ee                 shr esi, 1
// 00864751  f7d6                 not esi
// 00864753  6a02                 push 2
// 00864755  8bcb                 mov ecx, ebx
// 00864757  83e601               and esi, 1
// 0086475a  e831fd0600           call 0x8d4490
// 0086475f  897008               mov dword ptr [eax + 8], esi
// 00864762  8bb7b8000000         mov esi, dword ptr [edi + 0xb8]
// 00864768  d1ee                 shr esi, 1
// 0086476a  6a04                 push 4
// 0086476c  8bcb                 mov ecx, ebx
// 0086476e  83e602               and esi, 2
// 00864771  e81afd0600           call 0x8d4490
// 00864776  897008               mov dword ptr [eax + 8], esi
// 00864779  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 0086477f  8bc8                 mov ecx, eax
// 00864781  83e109               and ecx, 9
// 00864784  80f909               cmp cl, 9
// 00864787  7504                 jne 0x86478d
// 00864789  33f6                 xor esi, esi
// 0086478b  eb0c                 jmp 0x864799
// 0086478d  2401                 and al, 1
// 0086478f  0fb6f0               movzx esi, al
// 00864792  f7de                 neg esi
// 00864794  1bf6                 sbb esi, esi
// 00864796  83c602               add esi, 2
// 00864799  6a00                 push 0
// 0086479b  8bcb                 mov ecx, ebx
// 0086479d  e8eefc0600           call 0x8d4490
// 008647a2  897008               mov dword ptr [eax + 8], esi
// 008647a5  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 008647ab  8bd0                 mov edx, eax
// 008647ad  83e209               and edx, 9
// 008647b0  80fa09               cmp dl, 9
// 008647b3  7504                 jne 0x8647b9
// 008647b5  33f6                 xor esi, esi
// 008647b7  eb0c                 jmp 0x8647c5
// 008647b9  2401                 and al, 1
// 008647bb  0fb6f0               movzx esi, al
// 008647be  f7de                 neg esi
// 008647c0  1bf6                 sbb esi, esi
// 008647c2  83c602               add esi, 2
// 008647c5  6a01                 push 1
// 008647c7  8bcb                 mov ecx, ebx
// 008647c9  e8c2fc0600           call 0x8d4490
// 008647ce  897008               mov dword ptr [eax + 8], esi
// 008647d1  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 008647d7  a830                 test al, 0x30
// 008647d9  740f                 je 0x8647ea
// 008647db  2420                 and al, 0x20
// 008647dd  0fb6c0               movzx eax, al
// 008647e0  f7d8                 neg eax
// 008647e2  1bc0                 sbb eax, eax
// 008647e4  83c002               add eax, 2
// 008647e7  894320               mov dword ptr [ebx + 0x20], eax
// 008647ea  5f                   pop edi
// 008647eb  5e                   pop esi
// 008647ec  5b                   pop ebx
// 008647ed  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?UpdateFlags@CXTPTabClientWnd@@MAEXPAVCWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
