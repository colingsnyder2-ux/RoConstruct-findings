// from server: 100% by auto
// roc 2008-06 00701b30  unit: CXTPTabClientWnd  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00701b30
//
// 00701b30  53                   push ebx
// 00701b31  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00701b35  56                   push esi
// 00701b36  57                   push edi
// 00701b37  8bf9                 mov edi, ecx
// 00701b39  8bb7b8000000         mov esi, dword ptr [edi + 0xb8]
// 00701b3f  d1ee                 shr esi, 1
// 00701b41  f7d6                 not esi
// 00701b43  6a02                 push 2
// 00701b45  8bcb                 mov ecx, ebx
// 00701b47  83e601               and esi, 1
// 00701b4a  e801a60700           call 0x77c150
// 00701b4f  897008               mov dword ptr [eax + 8], esi
// 00701b52  8bb7b8000000         mov esi, dword ptr [edi + 0xb8]
// 00701b58  d1ee                 shr esi, 1
// 00701b5a  6a04                 push 4
// 00701b5c  8bcb                 mov ecx, ebx
// 00701b5e  83e602               and esi, 2
// 00701b61  e8eaa50700           call 0x77c150
// 00701b66  897008               mov dword ptr [eax + 8], esi
// 00701b69  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 00701b6f  8bc8                 mov ecx, eax
// 00701b71  83e109               and ecx, 9
// 00701b74  80f909               cmp cl, 9
// 00701b77  7504                 jne 0x701b7d
// 00701b79  33f6                 xor esi, esi
// 00701b7b  eb0c                 jmp 0x701b89
// 00701b7d  2401                 and al, 1
// 00701b7f  0fb6f0               movzx esi, al
// 00701b82  f7de                 neg esi
// 00701b84  1bf6                 sbb esi, esi
// 00701b86  83c602               add esi, 2
// 00701b89  6a00                 push 0
// 00701b8b  8bcb                 mov ecx, ebx
// 00701b8d  e8bea50700           call 0x77c150
// 00701b92  897008               mov dword ptr [eax + 8], esi
// 00701b95  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 00701b9b  8bd0                 mov edx, eax
// 00701b9d  83e209               and edx, 9
// 00701ba0  80fa09               cmp dl, 9
// 00701ba3  7504                 jne 0x701ba9
// 00701ba5  33f6                 xor esi, esi
// 00701ba7  eb0c                 jmp 0x701bb5
// 00701ba9  2401                 and al, 1
// 00701bab  0fb6f0               movzx esi, al
// 00701bae  f7de                 neg esi
// 00701bb0  1bf6                 sbb esi, esi
// 00701bb2  83c602               add esi, 2
// 00701bb5  6a01                 push 1
// 00701bb7  8bcb                 mov ecx, ebx
// 00701bb9  e892a50700           call 0x77c150
// 00701bbe  897008               mov dword ptr [eax + 8], esi
// 00701bc1  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 00701bc7  a830                 test al, 0x30
// 00701bc9  740f                 je 0x701bda
// 00701bcb  2420                 and al, 0x20
// 00701bcd  0fb6c0               movzx eax, al
// 00701bd0  f7d8                 neg eax
// 00701bd2  1bc0                 sbb eax, eax
// 00701bd4  83c002               add eax, 2
// 00701bd7  894320               mov dword ptr [ebx + 0x20], eax
// 00701bda  5f                   pop edi
// 00701bdb  5e                   pop esi
// 00701bdc  5b                   pop ebx
// 00701bdd  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?UpdateFlags@CXTPTabClientWnd@@MAEXPAVCWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
