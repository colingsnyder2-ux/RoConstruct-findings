// roc 2012-06 00854b20  unit: lua_exception  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00854b20
//
// 00854b20  53                   push ebx
// 00854b21  56                   push esi
// 00854b22  57                   push edi
// 00854b23  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00854b27  8b07                 mov eax, dword ptr [edi]
// 00854b29  50                   push eax
// 00854b2a  e8911d0e00           call 0x9368c0
// 00854b2f  8b742414             mov esi, dword ptr [esp + 0x14]
// 00854b33  8bd8                 mov ebx, eax
// 00854b35  8b4610               mov eax, dword ptr [esi + 0x10]
// 00854b38  8b4844               mov ecx, dword ptr [eax + 0x44]
// 00854b3b  83c404               add esp, 4
// 00854b3e  3b4840               cmp ecx, dword ptr [eax + 0x40]
// 00854b41  7209                 jb 0x854b4c
// 00854b43  56                   push esi
// 00854b44  e867e70d00           call 0x9332b0
// 00854b49  83c404               add esp, 4
// 00854b4c  b840bd9300           mov eax, 0x93bd40
// 00854b51  83fb1b               cmp ebx, 0x1b
// 00854b54  7405                 je 0x854b5b
// 00854b56  b860b29300           mov eax, 0x93b260
// 00854b5b  8b5710               mov edx, dword ptr [edi + 0x10]
// 00854b5e  52                   push edx
// 00854b5f  8b17                 mov edx, dword ptr [edi]
// 00854b61  8d4f04               lea ecx, [edi + 4]
// 00854b64  51                   push ecx
// 00854b65  52                   push edx
// 00854b66  56                   push esi
// 00854b67  ffd0                 call eax
// 00854b69  8bf8                 mov edi, eax
// 00854b6b  8b4648               mov eax, dword ptr [esi + 0x48]
// 00854b6e  0fb64f48             movzx ecx, byte ptr [edi + 0x48]
// 00854b72  50                   push eax
// 00854b73  51                   push ecx
// 00854b74  56                   push esi
// 00854b75  e856190e00           call 0x9364d0
// 00854b7a  33db                 xor ebx, ebx
// 00854b7c  83c41c               add esp, 0x1c
// 00854b7f  897810               mov dword ptr [eax + 0x10], edi
// 00854b82  89442414             mov dword ptr [esp + 0x14], eax
// 00854b86  385f48               cmp byte ptr [edi + 0x48], bl
// 00854b89  7622                 jbe 0x854bad
// 00854b8b  55                   push ebp
// 00854b8c  8d6814               lea ebp, [eax + 0x14]
// 00854b8f  90                   nop 
// 00854b90  56                   push esi
// 00854b91  e89a190e00           call 0x936530
// 00854b96  894500               mov dword ptr [ebp], eax
// 00854b99  0fb65748             movzx edx, byte ptr [edi + 0x48]
// 00854b9d  43                   inc ebx
// 00854b9e  83c404               add esp, 4
// 00854ba1  83c504               add ebp, 4
// 00854ba4  3bda                 cmp ebx, edx
// 00854ba6  7ce8                 jl 0x854b90
// 00854ba8  8b442418             mov eax, dword ptr [esp + 0x18]
// 00854bac  5d                   pop ebp
// 00854bad  8b4e08               mov ecx, dword ptr [esi + 8]
// 00854bb0  8901                 mov dword ptr [ecx], eax
// 00854bb2  c7410806000000       mov dword ptr [ecx + 8], 6
// 00854bb9  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00854bbc  2b4608               sub eax, dword ptr [esi + 8]
// 00854bbf  bf10000000           mov edi, 0x10
// 00854bc4  3bc7                 cmp eax, edi
// 00854bc6  7f27                 jg 0x854bef
// 00854bc8  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00854bcb  83f801               cmp eax, 1
// 00854bce  7c14                 jl 0x854be4
// 00854bd0  8d0c00               lea ecx, [eax + eax]
// 00854bd3  51                   push ecx
// 00854bd4  56                   push esi
// 00854bd5  e8a6faffff           call 0x854680
// 00854bda  83c408               add esp, 8
// 00854bdd  017e08               add dword ptr [esi + 8], edi
// 00854be0  5f                   pop edi
// 00854be1  5e                   pop esi
// 00854be2  5b                   pop ebx
// 00854be3  c3                   ret 
// 00854be4  40                   inc eax
// 00854be5  50                   push eax
// 00854be6  56                   push esi
// 00854be7  e894faffff           call 0x854680
// 00854bec  83c408               add esp, 8
// 00854bef  017e08               add dword ptr [esi + 8], edi
// 00854bf2  5f                   pop edi
// 00854bf3  5e                   pop esi
// 00854bf4  5b                   pop ebx
// 00854bf5  c3                   ret 
// library lua-5.1.4/ldo.c (function _f_parser)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
