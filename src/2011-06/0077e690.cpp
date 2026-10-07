// roc 2011-06 0077e690  unit: lua_exception  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077e690
//
// 0077e690  53                   push ebx
// 0077e691  56                   push esi
// 0077e692  57                   push edi
// 0077e693  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0077e697  8b07                 mov eax, dword ptr [edi]
// 0077e699  50                   push eax
// 0077e69a  e801c10500           call 0x7da7a0
// 0077e69f  8b742414             mov esi, dword ptr [esp + 0x14]
// 0077e6a3  8bd8                 mov ebx, eax
// 0077e6a5  8b4610               mov eax, dword ptr [esi + 0x10]
// 0077e6a8  8b4844               mov ecx, dword ptr [eax + 0x44]
// 0077e6ab  83c404               add esp, 4
// 0077e6ae  3b4840               cmp ecx, dword ptr [eax + 0x40]
// 0077e6b1  7209                 jb 0x77e6bc
// 0077e6b3  56                   push esi
// 0077e6b4  e8e78a0500           call 0x7d71a0
// 0077e6b9  83c404               add esp, 4
// 0077e6bc  b830e87d00           mov eax, 0x7de830
// 0077e6c1  83fb1b               cmp ebx, 0x1b
// 0077e6c4  7405                 je 0x77e6cb
// 0077e6c6  b850dd7d00           mov eax, 0x7ddd50
// 0077e6cb  8b5710               mov edx, dword ptr [edi + 0x10]
// 0077e6ce  52                   push edx
// 0077e6cf  8b17                 mov edx, dword ptr [edi]
// 0077e6d1  8d4f04               lea ecx, [edi + 4]
// 0077e6d4  51                   push ecx
// 0077e6d5  52                   push edx
// 0077e6d6  56                   push esi
// 0077e6d7  ffd0                 call eax
// 0077e6d9  8bf8                 mov edi, eax
// 0077e6db  8b4648               mov eax, dword ptr [esi + 0x48]
// 0077e6de  0fb64f48             movzx ecx, byte ptr [edi + 0x48]
// 0077e6e2  50                   push eax
// 0077e6e3  51                   push ecx
// 0077e6e4  56                   push esi
// 0077e6e5  e8c6bc0500           call 0x7da3b0
// 0077e6ea  33db                 xor ebx, ebx
// 0077e6ec  83c41c               add esp, 0x1c
// 0077e6ef  897810               mov dword ptr [eax + 0x10], edi
// 0077e6f2  89442414             mov dword ptr [esp + 0x14], eax
// 0077e6f6  385f48               cmp byte ptr [edi + 0x48], bl
// 0077e6f9  7622                 jbe 0x77e71d
// 0077e6fb  55                   push ebp
// 0077e6fc  8d6814               lea ebp, [eax + 0x14]
// 0077e6ff  90                   nop 
// 0077e700  56                   push esi
// 0077e701  e80abd0500           call 0x7da410
// 0077e706  894500               mov dword ptr [ebp], eax
// 0077e709  0fb65748             movzx edx, byte ptr [edi + 0x48]
// 0077e70d  43                   inc ebx
// 0077e70e  83c404               add esp, 4
// 0077e711  83c504               add ebp, 4
// 0077e714  3bda                 cmp ebx, edx
// 0077e716  7ce8                 jl 0x77e700
// 0077e718  8b442418             mov eax, dword ptr [esp + 0x18]
// 0077e71c  5d                   pop ebp
// 0077e71d  8b4e08               mov ecx, dword ptr [esi + 8]
// 0077e720  8901                 mov dword ptr [ecx], eax
// 0077e722  c7410806000000       mov dword ptr [ecx + 8], 6
// 0077e729  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0077e72c  2b4608               sub eax, dword ptr [esi + 8]
// 0077e72f  bf10000000           mov edi, 0x10
// 0077e734  3bc7                 cmp eax, edi
// 0077e736  7f27                 jg 0x77e75f
// 0077e738  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0077e73b  83f801               cmp eax, 1
// 0077e73e  7c14                 jl 0x77e754
// 0077e740  8d0c00               lea ecx, [eax + eax]
// 0077e743  51                   push ecx
// 0077e744  56                   push esi
// 0077e745  e8a6faffff           call 0x77e1f0
// 0077e74a  83c408               add esp, 8
// 0077e74d  017e08               add dword ptr [esi + 8], edi
// 0077e750  5f                   pop edi
// 0077e751  5e                   pop esi
// 0077e752  5b                   pop ebx
// 0077e753  c3                   ret 
// 0077e754  40                   inc eax
// 0077e755  50                   push eax
// 0077e756  56                   push esi
// 0077e757  e894faffff           call 0x77e1f0
// 0077e75c  83c408               add esp, 8
// 0077e75f  017e08               add dword ptr [esi + 8], edi
// 0077e762  5f                   pop edi
// 0077e763  5e                   pop esi
// 0077e764  5b                   pop ebx
// 0077e765  c3                   ret 
// library lua-5.1.4/ldo.c (function _f_parser)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
