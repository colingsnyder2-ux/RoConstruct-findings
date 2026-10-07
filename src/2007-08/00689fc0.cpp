// roc 2007-08 00689fc0  unit: CXTPTabClientWnd  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00689fc0
//
// 00689fc0  53                   push ebx
// 00689fc1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00689fc5  56                   push esi
// 00689fc6  57                   push edi
// 00689fc7  8bf9                 mov edi, ecx
// 00689fc9  8bb7b8000000         mov esi, dword ptr [edi + 0xb8]
// 00689fcf  d1ee                 shr esi, 1
// 00689fd1  f7d6                 not esi
// 00689fd3  6a02                 push 2
// 00689fd5  8bcb                 mov ecx, ebx
// 00689fd7  83e601               and esi, 1
// 00689fda  e8a1450700           call 0x6fe580
// 00689fdf  897008               mov dword ptr [eax + 8], esi
// 00689fe2  8bb7b8000000         mov esi, dword ptr [edi + 0xb8]
// 00689fe8  d1ee                 shr esi, 1
// 00689fea  6a04                 push 4
// 00689fec  8bcb                 mov ecx, ebx
// 00689fee  83e602               and esi, 2
// 00689ff1  e88a450700           call 0x6fe580
// 00689ff6  897008               mov dword ptr [eax + 8], esi
// 00689ff9  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 00689fff  8bc8                 mov ecx, eax
// 0068a001  83e109               and ecx, 9
// 0068a004  80f909               cmp cl, 9
// 0068a007  7504                 jne 0x68a00d
// 0068a009  33f6                 xor esi, esi
// 0068a00b  eb0b                 jmp 0x68a018
// 0068a00d  2401                 and al, 1
// 0068a00f  f6d8                 neg al
// 0068a011  1bc0                 sbb eax, eax
// 0068a013  83c002               add eax, 2
// 0068a016  8bf0                 mov esi, eax
// 0068a018  6a00                 push 0
// 0068a01a  8bcb                 mov ecx, ebx
// 0068a01c  e85f450700           call 0x6fe580
// 0068a021  897008               mov dword ptr [eax + 8], esi
// 0068a024  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 0068a02a  8bd0                 mov edx, eax
// 0068a02c  83e209               and edx, 9
// 0068a02f  80fa09               cmp dl, 9
// 0068a032  7504                 jne 0x68a038
// 0068a034  33f6                 xor esi, esi
// 0068a036  eb0b                 jmp 0x68a043
// 0068a038  2401                 and al, 1
// 0068a03a  f6d8                 neg al
// 0068a03c  1bc0                 sbb eax, eax
// 0068a03e  83c002               add eax, 2
// 0068a041  8bf0                 mov esi, eax
// 0068a043  6a01                 push 1
// 0068a045  8bcb                 mov ecx, ebx
// 0068a047  e834450700           call 0x6fe580
// 0068a04c  897008               mov dword ptr [eax + 8], esi
// 0068a04f  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 0068a055  a830                 test al, 0x30
// 0068a057  740c                 je 0x68a065
// 0068a059  2420                 and al, 0x20
// 0068a05b  f6d8                 neg al
// 0068a05d  1bc0                 sbb eax, eax
// 0068a05f  83c002               add eax, 2
// 0068a062  894320               mov dword ptr [ebx + 0x20], eax
// 0068a065  5f                   pop edi
// 0068a066  5e                   pop esi
// 0068a067  5b                   pop ebx
// 0068a068  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPTabClientWnd.cpp (function ?UpdateFlags@CXTPTabClientWnd@@MAEXPAVCWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPTabClientWnd.cpp
